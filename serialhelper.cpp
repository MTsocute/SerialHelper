#include "serialhelper.h"

#include <charconv>
#include <ios>

#include "./ui_serialhelper.h"
#include "global.h"

SerialHelper::SerialHelper(QWidget *parent) : QMainWindow(parent), ui(new Ui::SerialHelper) {
    ui->setupUi(this);
    this->setWindowTitle("Serial Helper");
    this->setWindowIcon(QIcon(":/img/help.ico"));

    // 串口
    Serial_Port = new QSerialPort(this);

    // 初始化 "打开串口" 按钮状态
    this->Serial_Button_Status = ButtonState::OFF;
    ui->sendDataButton->setEnabled(false);
    ui->openSerialButton->setProperty("state", "released");
    repolishStatus(ui->openSerialButton);

    // 定时器，实时检查是否存在可用的串口
    serialWatcher = new QTimer(this);
    serialWatcher->start(1000);

    // 初始化 "串口选框"
    this->updatePortLists();

    // 模式发生改变时，联动变动
    connect(ui->recvModeCBox, &QComboBox::currentIndexChanged, this, &SerialHelper::slot_hex_tex_mode_modified);
    connect(ui->sendModeCBox, &QComboBox::currentIndexChanged, this, &SerialHelper::slot_hex_tex_mode_modified);
    // 每隔 1s 检查是否存在可用的串口
    connect(serialWatcher, &QTimer::timeout, this, &SerialHelper::updatePortLists);
}

SerialHelper::~SerialHelper() {
    serialWatcher->stop();
    delete ui;

    qDebug() << "Serial Helper Destroyed";
}

void SerialHelper::on_clearRecvAreaButton_clicked() const { ui->recvArea->clear(); }

void SerialHelper::on_clearSendAreaButton_clicked() const { ui->sendArea->clear(); }

void SerialHelper::slot_hex_tex_mode_modified() const {
    if (ui->recvModeCBox->currentIndex() == 0) {
        qDebug() << "Receive Mode: HEX";
        return;
    }
    if (ui->recvModeCBox->currentIndex() == 1) {
        qDebug() << "Receive Mode: TXT";
        return;
    }

    if (ui->sendModeCBox->currentIndex() == 0) {
        qDebug() << "Send Mode: HEX";
        return;
    }
    if (ui->sendModeCBox->currentIndex() == 1) {
        qDebug() << "Send Mode: TXT";
    }
}

void SerialHelper::on_openSerialButton_clicked() {
    // 如果串口号为空（找不到串口），那么使用 MsgBox 提示打开失败
    if (ui->serialNumCBox->currentText().trimmed().isEmpty() || ui->serialNumCBox->currentText() == " ") {
        QMessageBox::information(this, "提示", "没有可用的串口!");
    } else {
        buttonBasicFunction();
    }
}

void SerialHelper::buttonBasicFunction() {
    // 打开串口开关
    if (Serial_Button_Status == ButtonState::OFF) {
        Serial_Button_Status = ButtonState::ON;
        ui->sendDataButton->setEnabled(true);
        ui->openSerialButton->setProperty("state", "pressed");
        ui->openSerialButton->setText("关闭串口");
        // USART
        auto portName = ui->serialNumCBox->currentText();
        auto baudRate = ui->baudCBox->currentText();
        auto dataBits = ui->dataCBox->currentText();
        auto stopBits = ui->stopCBox->currentText();
        auto parity = ui->examCBox->currentText();
        USART_Config(portName, baudRate, dataBits, stopBits, parity);
    }
    // 关闭串口开关
    else if (Serial_Button_Status == ButtonState::ON) {
        Serial_Button_Status = ButtonState::OFF;
        ui->sendDataButton->setEnabled(false);
        ui->openSerialButton->setProperty("state", "released");
        ui->openSerialButton->setText("打开串口");
        Serial_Port->close();
        qDebug() << "串口成功关闭";
    }

    repolishStatus(ui->openSerialButton);
    // auto state = Serial_Button_Status == 1 ? "ON" : "OFF";
    // qDebug() << "开关现在的状态是：" << state;
}

void SerialHelper::updatePortLists() const {
    static QStringList lastPortList; // 记录上次串口状态
    QStringList currentPortList; // 当前的所有串口

    // 返回 所有端口的情况
    QList<QSerialPortInfo> availablePorts = QSerialPortInfo::availablePorts();

    // 遍历可用串口，添加到列表
    for (const QSerialPortInfo &port: availablePorts) {
        currentPortList.append(port.portName());
    }

    // 如果串口状态没有变化，则不更新 UI，防止频繁刷新
    if (currentPortList == lastPortList) {
        return;
    }

    // 更新串口列表
    ui->serialNumCBox->clear();
    if (!currentPortList.isEmpty()) {
        ui->serialNumCBox->addItems(currentPortList);
    } else {
        ui->serialNumCBox->addItem(" "); // 无串口，添加空项
    }

    lastPortList = currentPortList; // 更新上次状态
}

void SerialHelper::USART_Config(const QString &port, const QString &baud, const QString &data, const QString &stop,
                                const QString &check) {
    QSerialPort::BaudRate Baud = {}; // 波特率枚举
    QSerialPort::DataBits Data = {}; // 数据位枚举
    QSerialPort::StopBits Stop = {}; // 停止位枚举
    QSerialPort::Parity Check = {}; // 校验位枚举

    // 根据字符串参数设置波特率
    if (baud == "4800")
        Baud = QSerialPort::Baud4800;
    else if (baud == "9600")
        Baud = QSerialPort::Baud9600;
    else if (baud == "19200")
        Baud = QSerialPort::Baud19200;
    else if (baud == "38400")
        Baud = QSerialPort::Baud38400;
    else if (baud == "115200")
        Baud = QSerialPort::Baud115200;

    // 设置数据位，仅支持8位数据
    if (data == "5")
        Data = QSerialPort::Data5;
    else if (data == "6")
        Data = QSerialPort::Data6;
    else if (data == "7")
        Data = QSerialPort::Data7;
    else if (data == "8")
        Data = QSerialPort::Data8;

    // 根据字符串设置停止位
    if (stop == "1")
        Stop = QSerialPort::OneStop;
    else if (stop == "1.5")
        Stop = QSerialPort::OneAndHalfStop;
    else if (stop == "2")
        Stop = QSerialPort::TwoStop;

    // 设置校验位，根据中文字符匹配
    if (check == QString::fromLocal8Bit("无"))
        Check = QSerialPort::NoParity;
    else if (check == QString::fromLocal8Bit("奇校验"))
        Check = QSerialPort::OddParity;
    else if (check == QString::fromLocal8Bit("偶校验"))
        Check = QSerialPort::EvenParity;

    // 配置串口参数
    Serial_Port->setPortName(port);
    Serial_Port->setBaudRate(Baud);
    Serial_Port->setDataBits(Data);
    Serial_Port->setParity(Check);
    Serial_Port->setStopBits(Stop);

    qDebug() << "USART CONFIG COMPLETE";
    // 输出配置信息
    qDebug() << "串口配置：";
    qDebug() << "端口名：" << Serial_Port->portName();
    qDebug() << "波特率：" << Serial_Port->baudRate();
    qDebug() << "数据位：" << Serial_Port->dataBits();
    qDebug() << "停止位：" << Serial_Port->stopBits();
    qDebug() << "校验位：" << Serial_Port->parity();

    // FIXME:中文粘包问题，使用包头包尾解决，目前就用英文最好
    if (Serial_Port->open(QSerialPort::ReadWrite)) { // 串口打开，可读可写模式
        qDebug() << "串口打开成功!";
        this->connect(Serial_Port, &QSerialPort::readyRead, [&]() {
            // 读取单片机发送的数据
            auto recv_data = Serial_Port->readAll();
            qDebug() << "Receive Data: " << recv_data;
            // HEX
            if (ui->recvModeCBox->currentText() == "HEX 模式") {
                QString hex = recv_data.toHex(' ');
                ui->recvArea->insertPlainText(hex);
            }
            // TEXT
            else {
                QString recv = QString(recv_data);
                ui->recvArea->insertPlainText(recv);
            }
        });
    } else {
        QMessageBox::critical(nullptr, "错误", "串口打开失败!");
    }
}

void SerialHelper::on_sendDataButton_clicked() {
    auto data = ui->sendArea->toPlainText();
    auto mode = ui->sendModeCBox->currentText();
    qDebug() << "Mode: " << mode;

    // 中文 + 英文就别用 fromLocal8Bit 了，或者转 CPP string
    if (mode == "HEX 模式") {
        QByteArray arr;
        for (int i = 0; i < data.size(); i++) {
            if (data[i] == ' ') continue;
            int num = data.mid(i, 2).toUInt(nullptr, 16);       //将数据转为16进制
            i++;
            arr.append(num);
        }
        qDebug() << "HEX to Write: " << arr;
        Serial_Port->write(arr);
    }
    else {
        qDebug() << "TXT to Write: " << data;
        Serial_Port->write(data.toLocal8Bit().data());           //转为utf-8格式字符串写
    }
}
