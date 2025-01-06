#ifndef SERIALHELPER_H
#define SERIALHELPER_H

#include <QComboBox>
#include <QMainWindow>
#include <QMessageBox>
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QTimer>
#include "global.h"

QT_BEGIN_NAMESPACE
namespace Ui {
    class SerialHelper;
}
QT_END_NAMESPACE

class SerialHelper : public QMainWindow {
    Q_OBJECT

public:
    SerialHelper(QWidget *parent = nullptr);
    ~SerialHelper() override;

private slots:
    void on_clearRecvAreaButton_clicked() const;

    void on_clearSendAreaButton_clicked() const;

    void slot_hex_tex_mode_modified() const;

    void on_openSerialButton_clicked();

    void on_sendDataButton_clicked();

    // TODO: 保存内容为文件

private:
    Ui::SerialHelper *ui;
    int Serial_Button_Status;
    QSerialPort *Serial_Port;
    QTimer * serialWatcher;

    void buttonBasicFunction();

    void updatePortLists() const;

    void USART_Config(const QString& port, const QString& baud, const QString& data, const QString& stop, const QString& check);
};
#endif // SERIALHELPER_H
