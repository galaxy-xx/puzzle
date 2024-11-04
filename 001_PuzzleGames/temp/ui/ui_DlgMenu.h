/********************************************************************************
** Form generated from reading UI file 'DlgMenu.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGMENU_H
#define UI_DLGMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_dlgMenu
{
public:
    QPushButton *btStart;
    QPushButton *btnExit;
    QPushButton *btnhard;
    QPushButton *btnphoto;
    QLabel *label;

    void setupUi(QDialog *dlgMenu)
    {
        if (dlgMenu->objectName().isEmpty())
            dlgMenu->setObjectName("dlgMenu");
        dlgMenu->resize(525, 514);
        dlgMenu->setStyleSheet(QString::fromUtf8("QDialog#dlgMenu\n"
"{\n"
"   \n"
"	\n"
"	\n"
"	border-image: url(:/img/\345\233\276\347\211\207\345\210\207\345\211\262\357\274\2104x4\357\274\211.jpeg);\n"
"}"));
        btStart = new QPushButton(dlgMenu);
        btStart->setObjectName("btStart");
        btStart->setGeometry(QRect(160, 170, 211, 71));
        btStart->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        btStart->setStyleSheet(QString::fromUtf8("background-color: rgb(174, 119, 71);\n"
"font: 700  28pt \"\346\226\271\346\255\243\350\207\264\351\235\222\346\230\245\344\275\223 \347\256\200 Bold\";\n"
""));
        btStart->setFlat(false);
        btnExit = new QPushButton(dlgMenu);
        btnExit->setObjectName("btnExit");
        btnExit->setGeometry(QRect(430, 460, 81, 41));
        btnExit->setStyleSheet(QString::fromUtf8("background-color:rgb(79, 74, 92);\n"
"font: 800 13pt \"\346\226\271\346\255\243\350\225\264\351\273\221 \347\256\200 ExtraBold\";\n"
""));
        btnExit->setAutoDefault(true);
        btnExit->setFlat(false);
        btnhard = new QPushButton(dlgMenu);
        btnhard->setObjectName("btnhard");
        btnhard->setGeometry(QRect(206, 340, 121, 51));
        btnhard->setStyleSheet(QString::fromUtf8("background-color:rgb(79, 74, 92);\n"
"font: 800 16pt \"\346\226\271\346\255\243\350\225\264\351\273\221 \347\256\200 ExtraBold\";\n"
""));
        btnhard->setAutoDefault(true);
        btnhard->setFlat(false);
        btnphoto = new QPushButton(dlgMenu);
        btnphoto->setObjectName("btnphoto");
        btnphoto->setGeometry(QRect(205, 270, 121, 51));
        btnphoto->setStyleSheet(QString::fromUtf8("background-color:rgb(79, 74, 92);\n"
"font: 800 16pt \"\346\226\271\346\255\243\350\225\264\351\273\221 \347\256\200 ExtraBold\";\n"
""));
        btnphoto->setAutoDefault(true);
        btnphoto->setFlat(false);
        label = new QLabel(dlgMenu);
        label->setObjectName("label");
        label->setGeometry(QRect(130, 20, 281, 121));
        label->setStyleSheet(QString::fromUtf8("\n"
"font: 700  100pt \"\346\226\271\346\255\243\350\207\264\351\235\222\346\230\245\344\275\223 \347\256\200 Bold\";\n"
""));

        retranslateUi(dlgMenu);

        QMetaObject::connectSlotsByName(dlgMenu);
    } // setupUi

    void retranslateUi(QDialog *dlgMenu)
    {
        dlgMenu->setWindowTitle(QCoreApplication::translate("dlgMenu", "\346\213\274\345\233\276\345\260\217\346\270\270\346\210\217 ", nullptr));
        btStart->setText(QCoreApplication::translate("dlgMenu", "\345\274\200\345\247\213\346\270\270\346\210\217", nullptr));
        btnExit->setText(QCoreApplication::translate("dlgMenu", "\351\200\200\345\207\272\346\270\270\346\210\217", nullptr));
        btnhard->setText(QCoreApplication::translate("dlgMenu", "\351\232\276\345\272\246", nullptr));
        btnphoto->setText(QCoreApplication::translate("dlgMenu", "\350\207\252\345\256\232\344\271\211\345\233\276\347\211\207", nullptr));
        label->setText(QCoreApplication::translate("dlgMenu", "\346\213\274\345\233\276\357\274\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dlgMenu: public Ui_dlgMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGMENU_H
