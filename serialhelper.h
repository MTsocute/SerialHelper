#ifndef SERIALHELPER_H
#define SERIALHELPER_H

#include <QComboBox>
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
    class SerialHelper;
}
QT_END_NAMESPACE

class SerialHelper : public QMainWindow {
    Q_OBJECT

public:
    SerialHelper(QWidget *parent = nullptr);
    ~SerialHelper();

private slots:
    void on_clearRecvAreaButton_clicked() const;
    void on_clearSendAreaButton_clicked() const;

    void slot_hex_tex_mode_modified(QComboBox * mode, QComboBox * encode_mode);

private:
    Ui::SerialHelper *ui;
};
#endif // SERIALHELPER_H
