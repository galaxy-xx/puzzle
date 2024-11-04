/********************************************************************************
** Form generated from reading UI file 'play4.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLAY4_H
#define UI_PLAY4_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_play4
{
public:
    QPushButton *btnRestart;
    QLCDNumber *lcdStep_2;
    QLCDNumber *lcdStep;
    QLabel *label_7;
    QPushButton *pushButton_2;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_3;
    QLabel *time_labl;
    QPushButton *pushButton_3;
    QLabel *label_9;
    QLabel *label;
    QPushButton *btnBack;
    QLabel *label_4;
    QLabel *label_8;
    QLabel *label_1;
    QPushButton *btnreturn;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;

    void setupUi(QWidget *play4)
    {
        if (play4->objectName().isEmpty())
            play4->setObjectName("play4");
        play4->resize(894, 831);
        btnRestart = new QPushButton(play4);
        btnRestart->setObjectName("btnRestart");
        btnRestart->setGeometry(QRect(20, 400, 161, 51));
        btnRestart->setStyleSheet(QString::fromUtf8("background-color: rgb(36, 36, 36);font: 800 20pt \"\346\226\271\346\255\243\350\225\264\351\273\221 \347\256\200 ExtraBold\";"));
        lcdStep_2 = new QLCDNumber(play4);
        lcdStep_2->setObjectName("lcdStep_2");
        lcdStep_2->setGeometry(QRect(150, 55, 141, 51));
        lcdStep_2->setDigitCount(5);
        lcdStep = new QLCDNumber(play4);
        lcdStep->setObjectName("lcdStep");
        lcdStep->setGeometry(QRect(680, 55, 141, 51));
        label_7 = new QLabel(play4);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(520, 350, 150, 150));
        label_7->setMinimumSize(QSize(150, 150));
        label_7->setMaximumSize(QSize(150, 150));
        label_7->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid;\n"
"border-color: rgb(0, 0, 0)"));
        pushButton_2 = new QPushButton(play4);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(20, 476, 161, 51));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(36, 36, 36);font: 800 20pt \"\346\226\271\346\255\243\350\225\264\351\273\221 \347\256\200 ExtraBold\";"));
        label_2 = new QLabel(play4);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(370, 200, 150, 150));
        label_2->setMinimumSize(QSize(150, 150));
        label_2->setMaximumSize(QSize(150, 150));
        label_2->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid;\n"
"border-color: rgb(0, 0, 0)"));
        label_5 = new QLabel(play4);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(220, 350, 150, 150));
        label_5->setMinimumSize(QSize(150, 150));
        label_5->setMaximumSize(QSize(150, 150));
        label_5->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid;\n"
"border-color: rgb(0, 0, 0)"));
        label_6 = new QLabel(play4);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(370, 350, 150, 150));
        label_6->setMinimumSize(QSize(150, 150));
        label_6->setMaximumSize(QSize(150, 150));
        label_6->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid;\n"
"border-color: rgb(0, 0, 0)"));
        label_3 = new QLabel(play4);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(520, 200, 150, 150));
        label_3->setMinimumSize(QSize(150, 150));
        label_3->setMaximumSize(QSize(150, 150));
        label_3->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid;\n"
"border-color: rgb(0, 0, 0)"));
        time_labl = new QLabel(play4);
        time_labl->setObjectName("time_labl");
        time_labl->setGeometry(QRect(30, 50, 121, 61));
        time_labl->setStyleSheet(QString::fromUtf8("font: 800 35pt \"\346\226\271\346\255\243\350\266\205\345\200\274\344\275\223 \347\256\200 ExtraBold\";"));
        time_labl->setTextFormat(Qt::TextFormat::PlainText);
        pushButton_3 = new QPushButton(play4);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(20, 548, 161, 51));
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(36, 36, 36);font: 800 20pt \"\346\226\271\346\255\243\350\225\264\351\273\221 \347\256\200 ExtraBold\";"));
        label_9 = new QLabel(play4);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(220, 500, 150, 150));
        label_9->setMinimumSize(QSize(150, 150));
        label_9->setMaximumSize(QSize(150, 150));
        label_9->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid;\n"
"border-color: rgb(0, 0, 0)"));
        label = new QLabel(play4);
        label->setObjectName("label");
        label->setGeometry(QRect(560, 50, 121, 61));
        label->setStyleSheet(QString::fromUtf8("font: 800 35pt \"\346\226\271\346\255\243\350\266\205\345\200\274\344\275\223 \347\256\200 ExtraBold\";"));
        label->setTextFormat(Qt::TextFormat::PlainText);
        btnBack = new QPushButton(play4);
        btnBack->setObjectName("btnBack");
        btnBack->setGeometry(QRect(20, 619, 161, 51));
        btnBack->setStyleSheet(QString::fromUtf8("font: 800 20pt \"\346\226\271\346\255\243\350\225\264\351\273\221 \347\256\200 ExtraBold\";\n"
"background-color: rgb(36, 36, 36);"));
        label_4 = new QLabel(play4);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(670, 200, 150, 150));
        label_4->setMinimumSize(QSize(150, 150));
        label_4->setMaximumSize(QSize(150, 150));
        label_4->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid;\n"
"border-color: rgb(0, 0, 0)"));
        label_8 = new QLabel(play4);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(670, 350, 150, 150));
        label_8->setMinimumSize(QSize(150, 150));
        label_8->setMaximumSize(QSize(150, 150));
        label_8->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid;\n"
"border-color: rgb(0, 0, 0)"));
        label_1 = new QLabel(play4);
        label_1->setObjectName("label_1");
        label_1->setGeometry(QRect(220, 200, 150, 150));
        label_1->setMinimumSize(QSize(150, 150));
        label_1->setMaximumSize(QSize(150, 150));
        label_1->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid;\n"
"border-color: rgb(0, 0, 0)"));
        btnreturn = new QPushButton(play4);
        btnreturn->setObjectName("btnreturn");
        btnreturn->setGeometry(QRect(20, 330, 161, 51));
        btnreturn->setStyleSheet(QString::fromUtf8("font: 800 20pt \"\346\226\271\346\255\243\350\225\264\351\273\221 \347\256\200 ExtraBold\";\n"
"background-color: rgb(36, 36, 36);"));
        label_10 = new QLabel(play4);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(370, 500, 150, 150));
        label_10->setMinimumSize(QSize(150, 150));
        label_10->setMaximumSize(QSize(150, 150));
        label_10->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid;\n"
"border-color: rgb(0, 0, 0)"));
        label_11 = new QLabel(play4);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(520, 500, 150, 150));
        label_11->setMinimumSize(QSize(150, 150));
        label_11->setMaximumSize(QSize(150, 150));
        label_11->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid;\n"
"border-color: rgb(0, 0, 0)"));
        label_12 = new QLabel(play4);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(670, 500, 150, 150));
        label_12->setMinimumSize(QSize(150, 150));
        label_12->setMaximumSize(QSize(150, 150));
        label_12->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid;\n"
"border-color: rgb(0, 0, 0)"));
        label_13 = new QLabel(play4);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(220, 650, 150, 150));
        label_13->setMinimumSize(QSize(150, 150));
        label_13->setMaximumSize(QSize(150, 150));
        label_13->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid;\n"
"border-color: rgb(0, 0, 0)"));
        label_14 = new QLabel(play4);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(370, 650, 150, 150));
        label_14->setMinimumSize(QSize(150, 150));
        label_14->setMaximumSize(QSize(150, 150));
        label_14->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid;\n"
"border-color: rgb(0, 0, 0)"));
        label_15 = new QLabel(play4);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(520, 650, 150, 150));
        label_15->setMinimumSize(QSize(150, 150));
        label_15->setMaximumSize(QSize(150, 150));
        label_15->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid;\n"
"border-color: rgb(0, 0, 0)"));
        label_16 = new QLabel(play4);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(670, 650, 150, 150));
        label_16->setMinimumSize(QSize(150, 150));
        label_16->setMaximumSize(QSize(150, 150));
        label_16->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid;\n"
"border-color: rgb(0, 0, 0)"));

        retranslateUi(play4);

        QMetaObject::connectSlotsByName(play4);
    } // setupUi

    void retranslateUi(QWidget *play4)
    {
        play4->setWindowTitle(QCoreApplication::translate("play4", "Form", nullptr));
        btnRestart->setText(QCoreApplication::translate("play4", "\351\207\215\345\274\200", nullptr));
        label_7->setText(QString());
        pushButton_2->setText(QCoreApplication::translate("play4", "\350\277\230\345\216\237", nullptr));
        label_2->setText(QString());
        label_5->setText(QString());
        label_6->setText(QString());
        label_3->setText(QString());
        time_labl->setText(QCoreApplication::translate("play4", "\350\200\227\346\227\266\357\274\232", nullptr));
        pushButton_3->setText(QCoreApplication::translate("play4", "\346\217\220\347\244\272", nullptr));
        label_9->setText(QString());
        label->setText(QCoreApplication::translate("play4", "\346\255\245\346\225\260\357\274\232", nullptr));
        btnBack->setText(QCoreApplication::translate("play4", "\350\277\224\345\233\236", nullptr));
        label_4->setText(QString());
        label_8->setText(QString());
        label_1->setText(QString());
        btnreturn->setText(QCoreApplication::translate("play4", "\345\220\216\351\200\200", nullptr));
        label_10->setText(QString());
        label_11->setText(QString());
        label_12->setText(QString());
        label_13->setText(QString());
        label_14->setText(QString());
        label_15->setText(QString());
        label_16->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class play4: public Ui_play4 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAY4_H
