#include "serialhelper.h"
#include "./ui_serialhelper.h"

SerialHelper::SerialHelper(QWidget *parent) : QMainWindow(parent), ui(new Ui::SerialHelper) {
    ui->setupUi(this);
    this->setWindowTitle("Serial Helper");
    this->setWindowIcon(QIcon(":/img/help.ico"));

    // 当 HEX 模式的时候编码禁用
    connect(ui->recvModeCBox, &QComboBox::currentIndexChanged, this,
            [this]() { slot_hex_tex_mode_modified(ui->recvModeCBox, ui->recvModeEncode); });
    connect(ui->sendModeCBox, &QComboBox::currentIndexChanged, this,
            [this]() { slot_hex_tex_mode_modified(ui->sendModeCBox, ui->sendModeEncode); });
}

SerialHelper::~SerialHelper() { delete ui; }

void SerialHelper::on_clearRecvAreaButton_clicked() const { ui->recvArea->clear(); }

void SerialHelper::on_clearSendAreaButton_clicked() const { ui->sendArea->clear(); }

void SerialHelper::slot_hex_tex_mode_modified(QComboBox *mode, QComboBox *encode_mode) {
    qDebug() << mode->currentIndex();
}

