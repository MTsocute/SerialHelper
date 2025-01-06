#include <QApplication>
#include <QFile>
#include <QPlainTextEdit>
#include "serialhelper.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);

    // Qss 美化
    QFile qss(":/style/style.qss");

    if (qss.open(QIODevice::ReadOnly)) {
        qDebug() << "美化界面初始化完毕";
        QString styple = QLatin1String(qss.readAll());
        a.setStyleSheet(styple);
        qss.close();
    } else {
        qWarning() << "美化界面初始化失败";
    }

    SerialHelper w;
    w.show();
    return a.exec();
}
