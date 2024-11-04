/********************************************************************************
** Form generated from reading UI file 'DlgPlaying.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGPLAYING_H
#define UI_DLGPLAYING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DlgPlaying
{
public:
    QLCDNumber *lcdStep;
    QPushButton *btnreturn;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label;
    QLabel *time_labl;
    QLCDNumber *lcdStep_2;
    QPushButton *btnRestart;
    QLabel *label_2;
    QLabel *label_6;
    QLabel *label_3;
    QLabel *label_7;
    QLabel *label_1;
    QLabel *label_9;
    QLabel *label_4;
    QLabel *label_8;
    QLabel *label_5;
    QPushButton *btnBack;

    void setupUi(QDialog *DlgPlaying)
    {
        if (DlgPlaying->objectName().isEmpty())
            DlgPlaying->setObjectName("DlgPlaying");
        DlgPlaying->resize(700, 703);
        DlgPlaying->setMaximumSize(QSize(871, 870));
        DlgPlaying->setStyleSheet(QString::fromUtf8("\n"
"QToolButton\n"
"{\n"
"	min-height: 25px;\n"
"	min-width: 70px;\n"
"	max-height: 25px;\n"
"	max-width: 70px\n"
"}"));
        lcdStep = new QLCDNumber(DlgPlaying);
        lcdStep->setObjectName("lcdStep");
        lcdStep->setGeometry(QRect(520, 65, 141, 51));
        btnreturn = new QPushButton(DlgPlaying);
        btnreturn->setObjectName("btnreturn");
        btnreturn->setGeometry(QRect(30, 240, 161, 51));
        btnreturn->setStyleSheet(QString::fromUtf8("font: 800 20pt \"\346\226\271\346\255\243\350\225\264\351\273\221 \347\256\200 ExtraBold\";\n"
"background-color: rgb(36, 36, 36);"));
        pushButton_2 = new QPushButton(DlgPlaying);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(30, 386, 161, 51));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(36, 36, 36);font: 800 20pt \"\346\226\271\346\255\243\350\225\264\351\273\221 \347\256\200 ExtraBold\";"));
        pushButton_3 = new QPushButton(DlgPlaying);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(30, 458, 161, 51));
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(36, 36, 36);font: 800 20pt \"\346\226\271\346\255\243\350\225\264\351\273\221 \347\256\200 ExtraBold\";"));
        label = new QLabel(DlgPlaying);
        label->setObjectName("label");
        label->setGeometry(QRect(400, 60, 121, 61));
        label->setStyleSheet(QString::fromUtf8("font: 800 35pt \"\346\226\271\346\255\243\350\266\205\345\200\274\344\275\223 \347\256\200 ExtraBold\";"));
        label->setTextFormat(Qt::TextFormat::PlainText);
        time_labl = new QLabel(DlgPlaying);
        time_labl->setObjectName("time_labl");
        time_labl->setGeometry(QRect(30, 60, 121, 61));
        time_labl->setStyleSheet(QString::fromUtf8("font: 800 35pt \"\346\226\271\346\255\243\350\266\205\345\200\274\344\275\223 \347\256\200 ExtraBold\";"));
        time_labl->setTextFormat(Qt::TextFormat::PlainText);
        lcdStep_2 = new QLCDNumber(DlgPlaying);
        lcdStep_2->setObjectName("lcdStep_2");
        lcdStep_2->setGeometry(QRect(150, 65, 141, 51));
        lcdStep_2->setDigitCount(5);
        btnRestart = new QPushButton(DlgPlaying);
        btnRestart->setObjectName("btnRestart");
        btnRestart->setGeometry(QRect(30, 310, 161, 51));
        btnRestart->setStyleSheet(QString::fromUtf8("background-color: rgb(36, 36, 36);font: 800 20pt \"\346\226\271\346\255\243\350\225\264\351\273\221 \347\256\200 ExtraBold\";"));
        label_2 = new QLabel(DlgPlaying);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(370, 230, 150, 150));
        label_2->setMinimumSize(QSize(150, 150));
        label_2->setMaximumSize(QSize(150, 150));
        label_2->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid;\n"
"border-color: rgb(0, 0, 0)"));
        label_6 = new QLabel(DlgPlaying);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(520, 380, 150, 150));
        label_6->setMinimumSize(QSize(150, 150));
        label_6->setMaximumSize(QSize(150, 150));
        label_6->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid;\n"
"border-color: rgb(0, 0, 0)"));
        label_3 = new QLabel(DlgPlaying);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(520, 230, 150, 150));
        label_3->setMinimumSize(QSize(150, 150));
        label_3->setMaximumSize(QSize(150, 150));
        label_3->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid;\n"
"border-color: rgb(0, 0, 0)"));
        label_7 = new QLabel(DlgPlaying);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(220, 530, 150, 150));
        label_7->setMinimumSize(QSize(150, 150));
        label_7->setMaximumSize(QSize(150, 150));
        label_7->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid;\n"
"border-color: rgb(0, 0, 0)"));
        label_1 = new QLabel(DlgPlaying);
        label_1->setObjectName("label_1");
        label_1->setGeometry(QRect(220, 230, 150, 150));
        label_1->setMinimumSize(QSize(150, 150));
        label_1->setMaximumSize(QSize(150, 150));
        label_1->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid;\n"
"border-color: rgb(0, 0, 0)"));
        label_9 = new QLabel(DlgPlaying);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(520, 530, 150, 150));
        label_9->setMinimumSize(QSize(150, 150));
        label_9->setMaximumSize(QSize(150, 150));
        label_9->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid;\n"
"border-color: rgb(0, 0, 0)"));
        label_4 = new QLabel(DlgPlaying);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(220, 380, 150, 150));
        label_4->setMinimumSize(QSize(150, 150));
        label_4->setMaximumSize(QSize(150, 150));
        label_4->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid;\n"
"border-color: rgb(0, 0, 0)"));
        label_8 = new QLabel(DlgPlaying);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(370, 530, 150, 150));
        label_8->setMinimumSize(QSize(150, 150));
        label_8->setMaximumSize(QSize(150, 150));
        label_8->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid;\n"
"border-color: rgb(0, 0, 0)"));
        label_5 = new QLabel(DlgPlaying);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(370, 380, 150, 150));
        label_5->setMinimumSize(QSize(150, 150));
        label_5->setMaximumSize(QSize(150, 150));
        label_5->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid;\n"
"border-color: rgb(0, 0, 0)"));
        btnBack = new QPushButton(DlgPlaying);
        btnBack->setObjectName("btnBack");
        btnBack->setGeometry(QRect(30, 529, 161, 51));
        btnBack->setStyleSheet(QString::fromUtf8("font: 800 20pt \"\346\226\271\346\255\243\350\225\264\351\273\221 \347\256\200 ExtraBold\";\n"
"background-color: rgb(36, 36, 36);"));

        retranslateUi(DlgPlaying);

        QMetaObject::connectSlotsByName(DlgPlaying);
    } // setupUi

    void retranslateUi(QDialog *DlgPlaying)
    {
        DlgPlaying->setWindowTitle(QCoreApplication::translate("DlgPlaying", "\346\213\274\345\233\276\345\260\217\346\270\270\346\210\217", nullptr));
        btnreturn->setText(QCoreApplication::translate("DlgPlaying", "\345\220\216\351\200\200", nullptr));
        pushButton_2->setText(QCoreApplication::translate("DlgPlaying", "\350\277\230\345\216\237", nullptr));
        pushButton_3->setText(QCoreApplication::translate("DlgPlaying", "\346\217\220\347\244\272", nullptr));
        label->setText(QCoreApplication::translate("DlgPlaying", "\346\255\245\346\225\260\357\274\232", nullptr));
        time_labl->setText(QCoreApplication::translate("DlgPlaying", "\350\200\227\346\227\266\357\274\232", nullptr));
        btnRestart->setText(QCoreApplication::translate("DlgPlaying", "\351\207\215\345\274\200", nullptr));
        label_2->setText(QString());
        label_6->setText(QString());
        label_3->setText(QString());
        label_7->setText(QString());
        label_1->setText(QString());
        label_9->setText(QString());
        label_4->setText(QString());
        label_8->setText(QString());
        label_5->setText(QString());
        btnBack->setText(QCoreApplication::translate("DlgPlaying", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DlgPlaying: public Ui_DlgPlaying {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGPLAYING_H
