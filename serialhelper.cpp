#include "serialhelper.h"
#include "./ui_serialhelper.h"

SerialHelper::SerialHelper(QWidget *parent) : QMainWindow(parent), ui(new Ui::SerialHelper) {
    ui->setupUi(this);
    this->setWindowTitle("Serial Helper");
    this->setWindowIcon(QIcon(":/img/help.ico"));


    // 当 HEX 模式的时候编码禁用
    if (ui->recvModeCBox->currentIndex() == 0) {
        ui->recvModeEncode->setEnabled(false);
    } else if (ui->recvModeCBox->currentIndex() == 1) {
        ui->recvModeEncode->setEnabled(true);
    }

    if (ui->sendModeCBox->currentIndex() == 0) {
        ui->sendModeEncode->setEnabled(false);
    } else if (ui->sendModeCBox->currentIndex() == 1) {
        ui->sendModeEncode->setEnabled(true);
    }

    // 模式发生改变时，联动变动
    connect(ui->recvModeCBox, &QComboBox::currentIndexChanged, this, &SerialHelper::slot_hex_tex_mode_modified);
    connect(ui->sendModeCBox, &QComboBox::currentIndexChanged, this, &SerialHelper::slot_hex_tex_mode_modified);
}

SerialHelper::~SerialHelper() { delete ui; }

void SerialHelper::on_clearRecvAreaButton_clicked() const { ui->recvArea->clear(); }

void SerialHelper::on_clearSendAreaButton_clicked() const { ui->sendArea->clear(); }

void SerialHelper::slot_hex_tex_mode_modified() const {
    if (ui->recvModeCBox->currentIndex() == 0) {
        ui->recvModeEncode->setEnabled(false);
    } else if (ui->recvModeCBox->currentIndex() == 1) {
        ui->recvModeEncode->setEnabled(true);
    }

    if (ui->sendModeCBox->currentIndex() == 0) {
        ui->sendModeEncode->setEnabled(false);
    } else if (ui->sendModeCBox->currentIndex() == 1) {
        ui->sendModeEncode->setEnabled(true);
    }
}

