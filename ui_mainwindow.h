/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton_2;
    QLabel *label_3;
    QPushButton *pushButton_3;
    QLabel *label_4;
    QPushButton *pushButton_4;
    QLabel *label_5;
    QPushButton *pushButton_5;
    QLabel *label_6;
    QPushButton *pushButton_6;
    QLabel *label_7;
    QPushButton *pushButton_7;
    QLabel *label_8;
    QPushButton *pushButton_8;
    QProgressBar *progressBar;
    QLabel *label_9;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(150, 160, 75, 51));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 20, 131, 131));
        label->setPixmap(QPixmap(QString::fromUtf8(":/img/icon/images.jpg")));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(260, 20, 131, 131));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/img/icon/ebffd02ce81e610b6863eb9cf92fcfa1.jpg")));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(290, 160, 75, 51));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(400, 20, 131, 131));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/img/icon/unnamed (1).jpg")));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(430, 160, 75, 51));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(540, 20, 131, 131));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/img/icon/download (9).jpg")));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(570, 160, 75, 51));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(120, 220, 131, 131));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/img/icon/290de7ce0173a82685a90ba02d63bbdd.jpg")));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(150, 360, 75, 51));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(260, 220, 131, 131));
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/img/icon/7557285aa1dc4ccb32ee4aa6e9985e3c.jpg")));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(290, 360, 75, 51));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(400, 220, 131, 131));
        label_7->setPixmap(QPixmap(QString::fromUtf8(":/img/icon/5ghu012mprz21.jpg")));
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(430, 360, 75, 51));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(540, 220, 131, 131));
        label_8->setPixmap(QPixmap(QString::fromUtf8(":/img/icon/tumblr_n33hrpmmWU1sm2531o2_1280.jpg")));
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(570, 360, 75, 61));
        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(10, 440, 781, 23));
        progressBar->setValue(0);
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(10, 470, 751, 16));
        label_9->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Select Vaporeon download plan", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "1 Vaporeon\n"
"to have sex\n"
"with", nullptr));
        label->setText(QString());
        label_2->setText(QString());
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "2 Vaporeon\n"
"to have sex\n"
"with", nullptr));
        label_3->setText(QString());
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "4 Vaporeon\n"
"to have sex\n"
"with", nullptr));
        label_4->setText(QString());
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "8 Vaporeon\n"
"to have sex\n"
"with", nullptr));
        label_5->setText(QString());
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "16 Vaporeon\n"
"to have sex\n"
"with", nullptr));
        label_6->setText(QString());
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "69 Vaporeon\n"
"to have sex\n"
"with", nullptr));
        label_7->setText(QString());
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "893 Vaporeon\n"
"to have sex\n"
"with", nullptr));
        label_8->setText(QString());
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "5882300\n"
"Vaporeon\n"
"to have sex\n"
"with", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Waiting for plan selection...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
