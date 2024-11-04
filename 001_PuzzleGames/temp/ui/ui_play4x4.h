/********************************************************************************
** Form generated from reading UI file 'play4x4.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLAY4X4_H
#define UI_PLAY4X4_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_play4x4
{
public:
    QLabel *label_16;
    QPushButton *btnRestart;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_12;
    QLabel *label_4;
    QLabel *label_13;
    QLCDNumber *lcdStep_2;
    QPushButton *btnBack;
    QLabel *time_labl;
    QPushButton *pushButton_3;
    QLabel *label_10;
    QLabel *label_11;
    QPushButton *pushButton_2;
    QLabel *label_9;
    QLCDNumber *lcdStep;
    QPushButton *btnreturn;
    QLabel *label_2;
    QLabel *label_1;
    QLabel *label_14;
    QLabel *label_7;
    QLabel *label_15;
    QLabel *label_5;
    QLabel *label_8;
    QLabel *label_6;

    void setupUi(QDialog *play4x4)
    {
        if (play4x4->objectName().isEmpty())
            play4x4->setObjectName("play4x4");
        play4x4->resize(860, 795);
        label_16 = new QLabel(play4x4);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(670, 620, 150, 150));
        label_16->setMinimumSize(QSize(150, 150));
        label_16->setMaximumSize(QSize(150, 150));
        label_16->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid;\n"
"border-color: rgb(0, 0, 0)"));
        btnRestart = new QPushButton(play4x4);
        btnRestart->setObjectName("btnRestart");
        btnRestart->setGeometry(QRect(20, 370, 161, 51));
        btnRestart->setStyleSheet(QString::fromUtf8("background-color: rgb(36, 36, 36);font: 800 20pt \"\346\226\271\346\255\243\350\225\264\351\273\221 \347\256\200 ExtraBold\";"));
        label = new QLabel(play4x4);
        label->setObjectName("label");
        label->setGeometry(QRect(570, 65, 121, 61));
        label->setStyleSheet(QString::fromUtf8("font: 800 35pt \"\346\226\271\346\255\243\350\266\205\345\200\274\344\275\223 \347\256\200 ExtraBold\";"));
        label->setTextFormat(Qt::TextFormat::PlainText);
        label_3 = new QLabel(play4x4);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(520, 170, 150, 150));
        label_3->setMinimumSize(QSize(150, 150));
        label_3->setMaximumSize(QSize(150, 150));
        label_3->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid;\n"
"border-color: rgb(0, 0, 0)"));
        label_12 = new QLabel(play4x4);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(670, 470, 150, 150));
        label_12->setMinimumSize(QSize(150, 150));
        label_12->setMaximumSize(QSize(150, 150));
        label_12->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid;\n"
"border-color: rgb(0, 0, 0)"));
        label_4 = new QLabel(play4x4);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(670, 170, 150, 150));
        label_4->setMinimumSize(QSize(150, 150));
        label_4->setMaximumSize(QSize(150, 150));
        label_4->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid;\n"
"border-color: rgb(0, 0, 0)"));
        label_13 = new QLabel(play4x4);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(220, 620, 150, 150));
        label_13->setMinimumSize(QSize(150, 150));
        label_13->setMaximumSize(QSize(150, 150));
        label_13->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid;\n"
"border-color: rgb(0, 0, 0)"));
        lcdStep_2 = new QLCDNumber(play4x4);
        lcdStep_2->setObjectName("lcdStep_2");
        lcdStep_2->setGeometry(QRect(160, 70, 141, 51));
        lcdStep_2->setDigitCount(5);
        btnBack = new QPushButton(play4x4);
        btnBack->setObjectName("btnBack");
        btnBack->setGeometry(QRect(20, 589, 161, 51));
        btnBack->setStyleSheet(QString::fromUtf8("font: 800 20pt \"\346\226\271\346\255\243\350\225\264\351\273\221 \347\256\200 ExtraBold\";\n"
"background-color: rgb(36, 36, 36);"));
        time_labl = new QLabel(play4x4);
        time_labl->setObjectName("time_labl");
        time_labl->setGeometry(QRect(40, 65, 121, 61));
        time_labl->setStyleSheet(QString::fromUtf8("font: 800 35pt \"\346\226\271\346\255\243\350\266\205\345\200\274\344\275\223 \347\256\200 ExtraBold\";"));
        time_labl->setTextFormat(Qt::TextFormat::PlainText);
        pushButton_3 = new QPushButton(play4x4);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(20, 518, 161, 51));
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(36, 36, 36);font: 800 20pt \"\346\226\271\346\255\243\350\225\264\351\273\221 \347\256\200 ExtraBold\";"));
        label_10 = new QLabel(play4x4);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(370, 470, 150, 150));
        label_10->setMinimumSize(QSize(150, 150));
        label_10->setMaximumSize(QSize(150, 150));
        label_10->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid;\n"
"border-color: rgb(0, 0, 0)"));
        label_11 = new QLabel(play4x4);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(520, 470, 150, 150));
        label_11->setMinimumSize(QSize(150, 150));
        label_11->setMaximumSize(QSize(150, 150));
        label_11->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid;\n"
"border-color: rgb(0, 0, 0)"));
        pushButton_2 = new QPushButton(play4x4);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(20, 446, 161, 51));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(36, 36, 36);font: 800 20pt \"\346\226\271\346\255\243\350\225\264\351\273\221 \347\256\200 ExtraBold\";"));
        label_9 = new QLabel(play4x4);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(220, 470, 150, 150));
        label_9->setMinimumSize(QSize(150, 150));
        label_9->setMaximumSize(QSize(150, 150));
        label_9->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid;\n"
"border-color: rgb(0, 0, 0)"));
        lcdStep = new QLCDNumber(play4x4);
        lcdStep->setObjectName("lcdStep");
        lcdStep->setGeometry(QRect(690, 70, 141, 51));
        btnreturn = new QPushButton(play4x4);
        btnreturn->setObjectName("btnreturn");
        btnreturn->setGeometry(QRect(20, 300, 161, 51));
        btnreturn->setStyleSheet(QString::fromUtf8("font: 800 20pt \"\346\226\271\346\255\243\350\225\264\351\273\221 \347\256\200 ExtraBold\";\n"
"background-color: rgb(36, 36, 36);"));
        label_2 = new QLabel(play4x4);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(370, 170, 150, 150));
        label_2->setMinimumSize(QSize(150, 150));
        label_2->setMaximumSize(QSize(150, 150));
        label_2->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid;\n"
"border-color: rgb(0, 0, 0)"));
        label_1 = new QLabel(play4x4);
        label_1->setObjectName("label_1");
        label_1->setGeometry(QRect(220, 170, 150, 150));
        label_1->setMinimumSize(QSize(150, 150));
        label_1->setMaximumSize(QSize(150, 150));
        label_1->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid;\n"
"border-color: rgb(0, 0, 0)"));
        label_14 = new QLabel(play4x4);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(370, 620, 150, 150));
        label_14->setMinimumSize(QSize(150, 150));
        label_14->setMaximumSize(QSize(150, 150));
        label_14->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid;\n"
"border-color: rgb(0, 0, 0)"));
        label_7 = new QLabel(play4x4);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(520, 320, 150, 150));
        label_7->setMinimumSize(QSize(150, 150));
        label_7->setMaximumSize(QSize(150, 150));
        label_7->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid;\n"
"border-color: rgb(0, 0, 0)"));
        label_15 = new QLabel(play4x4);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(520, 620, 150, 150));
        label_15->setMinimumSize(QSize(150, 150));
        label_15->setMaximumSize(QSize(150, 150));
        label_15->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid;\n"
"border-color: rgb(0, 0, 0)"));
        label_5 = new QLabel(play4x4);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(220, 320, 150, 150));
        label_5->setMinimumSize(QSize(150, 150));
        label_5->setMaximumSize(QSize(150, 150));
        label_5->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid;\n"
"border-color: rgb(0, 0, 0)"));
        label_8 = new QLabel(play4x4);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(670, 320, 150, 150));
        label_8->setMinimumSize(QSize(150, 150));
        label_8->setMaximumSize(QSize(150, 150));
        label_8->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid;\n"
"border-color: rgb(0, 0, 0)"));
        label_6 = new QLabel(play4x4);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(370, 320, 150, 150));
        label_6->setMinimumSize(QSize(150, 150));
        label_6->setMaximumSize(QSize(150, 150));
        label_6->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid;\n"
"border-color: rgb(0, 0, 0)"));

        retranslateUi(play4x4);

        QMetaObject::connectSlotsByName(play4x4);
    } // setupUi

    void retranslateUi(QDialog *play4x4)
    {
        play4x4->setWindowTitle(QCoreApplication::translate("play4x4", "\346\213\274\345\233\276\345\260\217\346\270\270\346\210\217", nullptr));
        label_16->setText(QString());
        btnRestart->setText(QCoreApplication::translate("play4x4", "\351\207\215\345\274\200", nullptr));
        label->setText(QCoreApplication::translate("play4x4", "\346\255\245\346\225\260\357\274\232", nullptr));
        label_3->setText(QString());
        label_12->setText(QString());
        label_4->setText(QString());
        label_13->setText(QString());
        btnBack->setText(QCoreApplication::translate("play4x4", "\350\277\224\345\233\236", nullptr));
        time_labl->setText(QCoreApplication::translate("play4x4", "\350\200\227\346\227\266\357\274\232", nullptr));
        pushButton_3->setText(QCoreApplication::translate("play4x4", "\346\217\220\347\244\272", nullptr));
        label_10->setText(QString());
        label_11->setText(QString());
        pushButton_2->setText(QCoreApplication::translate("play4x4", "\350\277\230\345\216\237", nullptr));
        label_9->setText(QString());
        btnreturn->setText(QCoreApplication::translate("play4x4", "\345\220\216\351\200\200", nullptr));
        label_2->setText(QString());
        label_1->setText(QString());
        label_14->setText(QString());
        label_7->setText(QString());
        label_15->setText(QString());
        label_5->setText(QString());
        label_8->setText(QString());
        label_6->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class play4x4: public Ui_play4x4 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAY4X4_H
