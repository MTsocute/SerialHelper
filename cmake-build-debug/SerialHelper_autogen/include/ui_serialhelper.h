/********************************************************************************
** Form generated from reading UI file 'serialhelper.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERIALHELPER_H
#define UI_SERIALHELPER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SerialHelper
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QGroupBox *revciveArea;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QPlainTextEdit *recvArea;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *saveAsFileButton;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *importFileButton;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *clearRecvAreaButton;
    QSpacerItem *horizontalSpacer_5;
    QGroupBox *SendArea;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_6;
    QPlainTextEdit *sendArea;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer;
    QPushButton *sendDataButton;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *clearSendAreaButton;
    QSpacerItem *horizontalSpacer_7;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *serialConfig;
    QGridLayout *gridLayout;
    QLabel *seraNumLabel;
    QComboBox *serialNumCBox;
    QLabel *baudLabel;
    QComboBox *baudCBox;
    QLabel *dataSizeLabel;
    QComboBox *dataCBox;
    QLabel *stopSizeLabel;
    QComboBox *stopCBox;
    QLabel *examSizeLabel;
    QComboBox *examCBox;
    QLabel *SerialOPLabel;
    QPushButton *openSerialLabel;
    QGroupBox *recvConfig;
    QGridLayout *gridLayout_2;
    QLabel *recvMode;
    QComboBox *recvModeCBox;
    QLabel *recvCodeMode;
    QComboBox *recvModeEncode;
    QGroupBox *sendConfig;
    QGridLayout *gridLayout_3;
    QLabel *sendMode;
    QComboBox *sendModeCBox;
    QLabel *sendCodeMode;
    QComboBox *sendModeEncode;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *SerialHelper)
    {
        if (SerialHelper->objectName().isEmpty())
            SerialHelper->setObjectName("SerialHelper");
        SerialHelper->resize(1200, 750);
        SerialHelper->setMinimumSize(QSize(1200, 750));
        centralwidget = new QWidget(SerialHelper);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(6, 6, 6, 6);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        revciveArea = new QGroupBox(centralwidget);
        revciveArea->setObjectName("revciveArea");
        verticalLayout_5 = new QVBoxLayout(revciveArea);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        recvArea = new QPlainTextEdit(revciveArea);
        recvArea->setObjectName("recvArea");

        verticalLayout_4->addWidget(recvArea);


        verticalLayout_5->addLayout(verticalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        saveAsFileButton = new QPushButton(revciveArea);
        saveAsFileButton->setObjectName("saveAsFileButton");
        saveAsFileButton->setMinimumSize(QSize(45, 33));

        horizontalLayout_3->addWidget(saveAsFileButton);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        importFileButton = new QPushButton(revciveArea);
        importFileButton->setObjectName("importFileButton");
        importFileButton->setMinimumSize(QSize(45, 33));

        horizontalLayout_3->addWidget(importFileButton);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        clearRecvAreaButton = new QPushButton(revciveArea);
        clearRecvAreaButton->setObjectName("clearRecvAreaButton");
        clearRecvAreaButton->setMinimumSize(QSize(45, 33));

        horizontalLayout_3->addWidget(clearRecvAreaButton);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        horizontalLayout_3->setStretch(0, 5);

        verticalLayout_5->addLayout(horizontalLayout_3);

        verticalLayout_5->setStretch(0, 5);

        verticalLayout->addWidget(revciveArea);

        SendArea = new QGroupBox(centralwidget);
        SendArea->setObjectName("SendArea");
        verticalLayout_7 = new QVBoxLayout(SendArea);
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        sendArea = new QPlainTextEdit(SendArea);
        sendArea->setObjectName("sendArea");

        verticalLayout_6->addWidget(sendArea);


        verticalLayout_7->addLayout(verticalLayout_6);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);

        sendDataButton = new QPushButton(SendArea);
        sendDataButton->setObjectName("sendDataButton");
        sendDataButton->setMinimumSize(QSize(45, 33));

        horizontalLayout_6->addWidget(sendDataButton);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);

        clearSendAreaButton = new QPushButton(SendArea);
        clearSendAreaButton->setObjectName("clearSendAreaButton");
        clearSendAreaButton->setMinimumSize(QSize(45, 33));

        horizontalLayout_6->addWidget(clearSendAreaButton);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_7);

        horizontalLayout_6->setStretch(0, 10);

        verticalLayout_7->addLayout(horizontalLayout_6);

        verticalLayout_7->setStretch(0, 3);
        verticalLayout_7->setStretch(1, 1);

        verticalLayout->addWidget(SendArea);

        verticalLayout->setStretch(0, 7);
        verticalLayout->setStretch(1, 3);

        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(6, 6, 6, 6);
        serialConfig = new QGroupBox(centralwidget);
        serialConfig->setObjectName("serialConfig");
        gridLayout = new QGridLayout(serialConfig);
        gridLayout->setObjectName("gridLayout");
        seraNumLabel = new QLabel(serialConfig);
        seraNumLabel->setObjectName("seraNumLabel");
        seraNumLabel->setMinimumSize(QSize(0, 25));

        gridLayout->addWidget(seraNumLabel, 0, 0, 1, 1);

        serialNumCBox = new QComboBox(serialConfig);
        serialNumCBox->setObjectName("serialNumCBox");
        serialNumCBox->setMinimumSize(QSize(0, 25));

        gridLayout->addWidget(serialNumCBox, 0, 1, 1, 1);

        baudLabel = new QLabel(serialConfig);
        baudLabel->setObjectName("baudLabel");

        gridLayout->addWidget(baudLabel, 1, 0, 1, 1);

        baudCBox = new QComboBox(serialConfig);
        baudCBox->addItem(QString());
        baudCBox->addItem(QString());
        baudCBox->addItem(QString());
        baudCBox->addItem(QString());
        baudCBox->setObjectName("baudCBox");
        baudCBox->setMinimumSize(QSize(0, 25));

        gridLayout->addWidget(baudCBox, 1, 1, 1, 1);

        dataSizeLabel = new QLabel(serialConfig);
        dataSizeLabel->setObjectName("dataSizeLabel");

        gridLayout->addWidget(dataSizeLabel, 2, 0, 1, 1);

        dataCBox = new QComboBox(serialConfig);
        dataCBox->addItem(QString());
        dataCBox->addItem(QString());
        dataCBox->addItem(QString());
        dataCBox->addItem(QString());
        dataCBox->setObjectName("dataCBox");
        dataCBox->setMinimumSize(QSize(0, 25));

        gridLayout->addWidget(dataCBox, 2, 1, 1, 1);

        stopSizeLabel = new QLabel(serialConfig);
        stopSizeLabel->setObjectName("stopSizeLabel");

        gridLayout->addWidget(stopSizeLabel, 3, 0, 1, 1);

        stopCBox = new QComboBox(serialConfig);
        stopCBox->addItem(QString());
        stopCBox->addItem(QString());
        stopCBox->addItem(QString());
        stopCBox->setObjectName("stopCBox");
        stopCBox->setMinimumSize(QSize(0, 25));

        gridLayout->addWidget(stopCBox, 3, 1, 1, 1);

        examSizeLabel = new QLabel(serialConfig);
        examSizeLabel->setObjectName("examSizeLabel");

        gridLayout->addWidget(examSizeLabel, 4, 0, 1, 1);

        examCBox = new QComboBox(serialConfig);
        examCBox->addItem(QString());
        examCBox->addItem(QString());
        examCBox->addItem(QString());
        examCBox->setObjectName("examCBox");
        examCBox->setMinimumSize(QSize(0, 25));

        gridLayout->addWidget(examCBox, 4, 1, 1, 1);

        SerialOPLabel = new QLabel(serialConfig);
        SerialOPLabel->setObjectName("SerialOPLabel");

        gridLayout->addWidget(SerialOPLabel, 5, 0, 1, 1);

        openSerialLabel = new QPushButton(serialConfig);
        openSerialLabel->setObjectName("openSerialLabel");
        openSerialLabel->setMinimumSize(QSize(0, 32));

        gridLayout->addWidget(openSerialLabel, 5, 1, 1, 1);


        verticalLayout_3->addWidget(serialConfig);

        recvConfig = new QGroupBox(centralwidget);
        recvConfig->setObjectName("recvConfig");
        gridLayout_2 = new QGridLayout(recvConfig);
        gridLayout_2->setObjectName("gridLayout_2");
        recvMode = new QLabel(recvConfig);
        recvMode->setObjectName("recvMode");

        gridLayout_2->addWidget(recvMode, 0, 0, 1, 1);

        recvModeCBox = new QComboBox(recvConfig);
        recvModeCBox->addItem(QString());
        recvModeCBox->addItem(QString());
        recvModeCBox->setObjectName("recvModeCBox");
        recvModeCBox->setMinimumSize(QSize(0, 25));

        gridLayout_2->addWidget(recvModeCBox, 0, 1, 1, 1);

        recvCodeMode = new QLabel(recvConfig);
        recvCodeMode->setObjectName("recvCodeMode");

        gridLayout_2->addWidget(recvCodeMode, 1, 0, 1, 1);

        recvModeEncode = new QComboBox(recvConfig);
        recvModeEncode->addItem(QString());
        recvModeEncode->addItem(QString());
        recvModeEncode->setObjectName("recvModeEncode");
        recvModeEncode->setMinimumSize(QSize(0, 25));

        gridLayout_2->addWidget(recvModeEncode, 1, 1, 1, 1);


        verticalLayout_3->addWidget(recvConfig);

        sendConfig = new QGroupBox(centralwidget);
        sendConfig->setObjectName("sendConfig");
        gridLayout_3 = new QGridLayout(sendConfig);
        gridLayout_3->setObjectName("gridLayout_3");
        sendMode = new QLabel(sendConfig);
        sendMode->setObjectName("sendMode");

        gridLayout_3->addWidget(sendMode, 0, 0, 1, 1);

        sendModeCBox = new QComboBox(sendConfig);
        sendModeCBox->addItem(QString());
        sendModeCBox->addItem(QString());
        sendModeCBox->setObjectName("sendModeCBox");
        sendModeCBox->setMinimumSize(QSize(0, 25));

        gridLayout_3->addWidget(sendModeCBox, 0, 1, 1, 1);

        sendCodeMode = new QLabel(sendConfig);
        sendCodeMode->setObjectName("sendCodeMode");

        gridLayout_3->addWidget(sendCodeMode, 1, 0, 1, 1);

        sendModeEncode = new QComboBox(sendConfig);
        sendModeEncode->addItem(QString());
        sendModeEncode->addItem(QString());
        sendModeEncode->setObjectName("sendModeEncode");
        sendModeEncode->setMinimumSize(QSize(0, 25));

        gridLayout_3->addWidget(sendModeEncode, 1, 1, 1, 1);


        verticalLayout_3->addWidget(sendConfig);

        verticalLayout_3->setStretch(0, 8);
        verticalLayout_3->setStretch(1, 3);
        verticalLayout_3->setStretch(2, 3);

        horizontalLayout->addLayout(verticalLayout_3);

        horizontalLayout->setStretch(0, 7);
        horizontalLayout->setStretch(1, 2);

        verticalLayout_2->addLayout(horizontalLayout);

        SerialHelper->setCentralWidget(centralwidget);
        menubar = new QMenuBar(SerialHelper);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1200, 33));
        SerialHelper->setMenuBar(menubar);
        statusbar = new QStatusBar(SerialHelper);
        statusbar->setObjectName("statusbar");
        SerialHelper->setStatusBar(statusbar);

        retranslateUi(SerialHelper);

        QMetaObject::connectSlotsByName(SerialHelper);
    } // setupUi

    void retranslateUi(QMainWindow *SerialHelper)
    {
        SerialHelper->setWindowTitle(QCoreApplication::translate("SerialHelper", "SerialHelper", nullptr));
        revciveArea->setTitle(QCoreApplication::translate("SerialHelper", "\346\216\245\345\217\227\345\214\272\346\225\260\346\215\256", nullptr));
        saveAsFileButton->setText(QCoreApplication::translate("SerialHelper", "\344\277\235\345\255\230\346\226\207\344\273\266", nullptr));
        importFileButton->setText(QCoreApplication::translate("SerialHelper", "\345\257\274\345\205\245\346\226\207\344\273\266", nullptr));
        clearRecvAreaButton->setText(QCoreApplication::translate("SerialHelper", "\346\270\205\347\251\272\346\216\245\345\217\227\345\214\272", nullptr));
        SendArea->setTitle(QCoreApplication::translate("SerialHelper", "\345\217\221\351\200\201\345\214\272\346\225\260\346\215\256", nullptr));
        sendDataButton->setText(QCoreApplication::translate("SerialHelper", "\345\217\221\351\200\201", nullptr));
        clearSendAreaButton->setText(QCoreApplication::translate("SerialHelper", "\346\270\205\347\251\272\345\217\221\351\200\201\345\214\272", nullptr));
        serialConfig->setTitle(QCoreApplication::translate("SerialHelper", "\344\270\262\345\217\243\351\205\215\347\275\256", nullptr));
        seraNumLabel->setText(QCoreApplication::translate("SerialHelper", "\344\270\262\345\217\243\345\217\267", nullptr));
        baudLabel->setText(QCoreApplication::translate("SerialHelper", "\346\263\242\347\211\271\347\216\207", nullptr));
        baudCBox->setItemText(0, QCoreApplication::translate("SerialHelper", "4800", nullptr));
        baudCBox->setItemText(1, QCoreApplication::translate("SerialHelper", "9600", nullptr));
        baudCBox->setItemText(2, QCoreApplication::translate("SerialHelper", "38400", nullptr));
        baudCBox->setItemText(3, QCoreApplication::translate("SerialHelper", "115200", nullptr));

        dataSizeLabel->setText(QCoreApplication::translate("SerialHelper", "\346\225\260\346\215\256\344\275\215", nullptr));
        dataCBox->setItemText(0, QCoreApplication::translate("SerialHelper", "5", nullptr));
        dataCBox->setItemText(1, QCoreApplication::translate("SerialHelper", "6", nullptr));
        dataCBox->setItemText(2, QCoreApplication::translate("SerialHelper", "7", nullptr));
        dataCBox->setItemText(3, QCoreApplication::translate("SerialHelper", "8", nullptr));

        stopSizeLabel->setText(QCoreApplication::translate("SerialHelper", "\345\201\234\346\255\242\344\275\215", nullptr));
        stopCBox->setItemText(0, QCoreApplication::translate("SerialHelper", "1", nullptr));
        stopCBox->setItemText(1, QCoreApplication::translate("SerialHelper", "1.5", nullptr));
        stopCBox->setItemText(2, QCoreApplication::translate("SerialHelper", "2", nullptr));

        examSizeLabel->setText(QCoreApplication::translate("SerialHelper", "\346\240\241\351\252\214\344\275\215", nullptr));
        examCBox->setItemText(0, QCoreApplication::translate("SerialHelper", "\346\227\240", nullptr));
        examCBox->setItemText(1, QCoreApplication::translate("SerialHelper", "\345\245\207\346\240\241\351\252\214", nullptr));
        examCBox->setItemText(2, QCoreApplication::translate("SerialHelper", "\345\201\266\346\240\241\351\252\214", nullptr));

        SerialOPLabel->setText(QCoreApplication::translate("SerialHelper", "\344\270\262\345\217\243\346\223\215\344\275\234", nullptr));
        openSerialLabel->setText(QCoreApplication::translate("SerialHelper", "\346\211\223\345\274\200\344\270\262\345\217\243", nullptr));
        recvConfig->setTitle(QCoreApplication::translate("SerialHelper", "\346\216\245\345\217\227\345\214\272\351\205\215\347\275\256", nullptr));
        recvMode->setText(QCoreApplication::translate("SerialHelper", "\346\216\245\345\217\227\346\250\241\345\274\217", nullptr));
        recvModeCBox->setItemText(0, QCoreApplication::translate("SerialHelper", "HEX \346\250\241\345\274\217", nullptr));
        recvModeCBox->setItemText(1, QCoreApplication::translate("SerialHelper", "\346\226\207\346\234\254\346\250\241\345\274\217", nullptr));

        recvCodeMode->setText(QCoreApplication::translate("SerialHelper", "\347\274\226\347\240\201\346\250\241\345\274\217", nullptr));
        recvModeEncode->setItemText(0, QCoreApplication::translate("SerialHelper", "GBK", nullptr));
        recvModeEncode->setItemText(1, QCoreApplication::translate("SerialHelper", "UTF-8", nullptr));

        sendConfig->setTitle(QCoreApplication::translate("SerialHelper", "\345\217\221\351\200\201\345\214\272\351\205\215\347\275\256", nullptr));
        sendMode->setText(QCoreApplication::translate("SerialHelper", "\345\217\221\351\200\201\346\250\241\345\274\217", nullptr));
        sendModeCBox->setItemText(0, QCoreApplication::translate("SerialHelper", "HEX \346\250\241\345\274\217", nullptr));
        sendModeCBox->setItemText(1, QCoreApplication::translate("SerialHelper", "\346\226\207\346\234\254\346\250\241\345\274\217", nullptr));

        sendCodeMode->setText(QCoreApplication::translate("SerialHelper", "\347\274\226\347\240\201\346\250\241\345\274\217", nullptr));
        sendModeEncode->setItemText(0, QCoreApplication::translate("SerialHelper", "GBK", nullptr));
        sendModeEncode->setItemText(1, QCoreApplication::translate("SerialHelper", "UTF-8", nullptr));

    } // retranslateUi

};

namespace Ui {
    class SerialHelper: public Ui_SerialHelper {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERIALHELPER_H
