/********************************************************************************
** Form generated from reading UI file 'play8x8.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLAY8X8_H
#define UI_PLAY8X8_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_play8x8
{
public:
    QPushButton *btnreturn;
    QLabel *label_01;
    QPushButton *btnBack;
    QLabel *time_labl;
    QLCDNumber *lcdStep;
    QPushButton *pushButton_2;
    QPushButton *btnRestart;
    QLabel *label;
    QPushButton *pushButton_3;
    QLCDNumber *lcdStep_2;
    QLabel *label_02;
    QLabel *label_03;
    QLabel *label_04;
    QLabel *label_05;
    QLabel *label_06;
    QLabel *label_07;
    QLabel *label_08;
    QLabel *label_09;
    QLabel *label_014;
    QLabel *label_010;
    QLabel *label_011;
    QLabel *label_016;
    QLabel *label_013;
    QLabel *label_012;
    QLabel *label_015;
    QLabel *label_024;
    QLabel *label_022;
    QLabel *label_027;
    QLabel *label_030;
    QLabel *label_028;
    QLabel *label_025;
    QLabel *label_018;
    QLabel *label_032;
    QLabel *label_019;
    QLabel *label_017;
    QLabel *label_021;
    QLabel *label_031;
    QLabel *label_026;
    QLabel *label_020;
    QLabel *label_023;
    QLabel *label_029;
    QLabel *label_040;
    QLabel *label_038;
    QLabel *label_059;
    QLabel *label_056;
    QLabel *label_043;
    QLabel *label_054;
    QLabel *label_051;
    QLabel *label_055;
    QLabel *label_046;
    QLabel *label_057;
    QLabel *label_053;
    QLabel *label_060;
    QLabel *label_044;
    QLabel *label_041;
    QLabel *label_034;
    QLabel *label_064;
    QLabel *label_048;
    QLabel *label_049;
    QLabel *label_062;
    QLabel *label_063;
    QLabel *label_035;
    QLabel *label_052;
    QLabel *label_033;
    QLabel *label_037;
    QLabel *label_047;
    QLabel *label_058;
    QLabel *label_050;
    QLabel *label_042;
    QLabel *label_061;
    QLabel *label_036;
    QLabel *label_039;
    QLabel *label_045;

    void setupUi(QDialog *play8x8)
    {
        if (play8x8->objectName().isEmpty())
            play8x8->setObjectName("play8x8");
        play8x8->resize(894, 782);
        btnreturn = new QPushButton(play8x8);
        btnreturn->setObjectName("btnreturn");
        btnreturn->setGeometry(QRect(30, 280, 161, 51));
        btnreturn->setStyleSheet(QString::fromUtf8("font: 800 20pt \"\346\226\271\346\255\243\350\225\264\351\273\221 \347\256\200 ExtraBold\";\n"
"background-color: rgb(36, 36, 36);"));
        label_01 = new QLabel(play8x8);
        label_01->setObjectName("label_01");
        label_01->setGeometry(QRect(235, 150, 75, 75));
        label_01->setMinimumSize(QSize(75, 75));
        label_01->setMaximumSize(QSize(75, 75));
        label_01->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid;\n"
"border-color: rgb(0, 0, 0)"));
        btnBack = new QPushButton(play8x8);
        btnBack->setObjectName("btnBack");
        btnBack->setGeometry(QRect(30, 569, 161, 51));
        btnBack->setStyleSheet(QString::fromUtf8("font: 800 20pt \"\346\226\271\346\255\243\350\225\264\351\273\221 \347\256\200 ExtraBold\";\n"
"background-color: rgb(36, 36, 36);"));
        time_labl = new QLabel(play8x8);
        time_labl->setObjectName("time_labl");
        time_labl->setGeometry(QRect(50, 45, 121, 61));
        time_labl->setStyleSheet(QString::fromUtf8("font: 800 35pt \"\346\226\271\346\255\243\350\266\205\345\200\274\344\275\223 \347\256\200 ExtraBold\";"));
        time_labl->setTextFormat(Qt::TextFormat::PlainText);
        lcdStep = new QLCDNumber(play8x8);
        lcdStep->setObjectName("lcdStep");
        lcdStep->setGeometry(QRect(700, 50, 141, 51));
        pushButton_2 = new QPushButton(play8x8);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(30, 426, 161, 51));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(36, 36, 36);font: 800 20pt \"\346\226\271\346\255\243\350\225\264\351\273\221 \347\256\200 ExtraBold\";"));
        btnRestart = new QPushButton(play8x8);
        btnRestart->setObjectName("btnRestart");
        btnRestart->setGeometry(QRect(30, 350, 161, 51));
        btnRestart->setStyleSheet(QString::fromUtf8("background-color: rgb(36, 36, 36);font: 800 20pt \"\346\226\271\346\255\243\350\225\264\351\273\221 \347\256\200 ExtraBold\";"));
        label = new QLabel(play8x8);
        label->setObjectName("label");
        label->setGeometry(QRect(580, 45, 121, 61));
        label->setStyleSheet(QString::fromUtf8("font: 800 35pt \"\346\226\271\346\255\243\350\266\205\345\200\274\344\275\223 \347\256\200 ExtraBold\";"));
        label->setTextFormat(Qt::TextFormat::PlainText);
        pushButton_3 = new QPushButton(play8x8);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(30, 498, 161, 51));
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(36, 36, 36);font: 800 20pt \"\346\226\271\346\255\243\350\225\264\351\273\221 \347\256\200 ExtraBold\";"));
        lcdStep_2 = new QLCDNumber(play8x8);
        lcdStep_2->setObjectName("lcdStep_2");
        lcdStep_2->setGeometry(QRect(170, 50, 141, 51));
        lcdStep_2->setDigitCount(5);
        label_02 = new QLabel(play8x8);
        label_02->setObjectName("label_02");
        label_02->setGeometry(QRect(310, 150, 75, 75));
        label_02->setMinimumSize(QSize(75, 75));
        label_02->setMaximumSize(QSize(75, 75));
        label_02->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid;\n"
"border-color: rgb(0, 0, 0)"));
        label_03 = new QLabel(play8x8);
        label_03->setObjectName("label_03");
        label_03->setGeometry(QRect(385, 150, 75, 75));
        label_03->setMinimumSize(QSize(75, 75));
        label_03->setMaximumSize(QSize(75, 75));
        label_03->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid;\n"
"border-color: rgb(0, 0, 0)"));
        label_04 = new QLabel(play8x8);
        label_04->setObjectName("label_04");
        label_04->setGeometry(QRect(460, 150, 75, 75));
        label_04->setMinimumSize(QSize(75, 75));
        label_04->setMaximumSize(QSize(75, 75));
        label_04->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid;\n"
"border-color: rgb(0, 0, 0)"));
        label_05 = new QLabel(play8x8);
        label_05->setObjectName("label_05");
        label_05->setGeometry(QRect(535, 150, 75, 75));
        label_05->setMinimumSize(QSize(75, 75));
        label_05->setMaximumSize(QSize(75, 75));
        label_05->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid;\n"
"border-color: rgb(0, 0, 0)"));
        label_06 = new QLabel(play8x8);
        label_06->setObjectName("label_06");
        label_06->setGeometry(QRect(610, 150, 75, 75));
        label_06->setMinimumSize(QSize(75, 75));
        label_06->setMaximumSize(QSize(75, 75));
        label_06->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid;\n"
"border-color: rgb(0, 0, 0)"));
        label_07 = new QLabel(play8x8);
        label_07->setObjectName("label_07");
        label_07->setGeometry(QRect(682, 150, 75, 75));
        label_07->setMinimumSize(QSize(75, 75));
        label_07->setMaximumSize(QSize(75, 75));
        label_07->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid;\n"
"border-color: rgb(0, 0, 0)"));
        label_08 = new QLabel(play8x8);
        label_08->setObjectName("label_08");
        label_08->setGeometry(QRect(757, 150, 75, 75));
        label_08->setMinimumSize(QSize(75, 75));
        label_08->setMaximumSize(QSize(75, 75));
        label_08->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid;\n"
"border-color: rgb(0, 0, 0)"));
        label_09 = new QLabel(play8x8);
        label_09->setObjectName("label_09");
        label_09->setGeometry(QRect(235, 224, 75, 75));
        label_09->setMinimumSize(QSize(75, 75));
        label_09->setMaximumSize(QSize(75, 75));
        label_09->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid;\n"
"border-color: rgb(0, 0, 0)"));
        label_014 = new QLabel(play8x8);
        label_014->setObjectName("label_014");
        label_014->setGeometry(QRect(610, 221, 75, 75));
        label_014->setMinimumSize(QSize(75, 75));
        label_014->setMaximumSize(QSize(75, 75));
        label_014->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid;\n"
"border-color: rgb(0, 0, 0)"));
        label_010 = new QLabel(play8x8);
        label_010->setObjectName("label_010");
        label_010->setGeometry(QRect(310, 222, 75, 75));
        label_010->setMinimumSize(QSize(75, 75));
        label_010->setMaximumSize(QSize(75, 75));
        label_010->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid;\n"
"border-color: rgb(0, 0, 0)"));
        label_011 = new QLabel(play8x8);
        label_011->setObjectName("label_011");
        label_011->setGeometry(QRect(385, 222, 75, 75));
        label_011->setMinimumSize(QSize(75, 75));
        label_011->setMaximumSize(QSize(75, 75));
        label_011->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid;\n"
"border-color: rgb(0, 0, 0)"));
        label_016 = new QLabel(play8x8);
        label_016->setObjectName("label_016");
        label_016->setGeometry(QRect(757, 222, 75, 75));
        label_016->setMinimumSize(QSize(75, 75));
        label_016->setMaximumSize(QSize(75, 75));
        label_016->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid;\n"
"border-color: rgb(0, 0, 0)"));
        label_013 = new QLabel(play8x8);
        label_013->setObjectName("label_013");
        label_013->setGeometry(QRect(535, 221, 75, 75));
        label_013->setMinimumSize(QSize(75, 75));
        label_013->setMaximumSize(QSize(75, 75));
        label_013->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid;\n"
"border-color: rgb(0, 0, 0)"));
        label_012 = new QLabel(play8x8);
        label_012->setObjectName("label_012");
        label_012->setGeometry(QRect(460, 221, 75, 75));
        label_012->setMinimumSize(QSize(75, 75));
        label_012->setMaximumSize(QSize(75, 75));
        label_012->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid;\n"
"border-color: rgb(0, 0, 0)"));
        label_015 = new QLabel(play8x8);
        label_015->setObjectName("label_015");
        label_015->setGeometry(QRect(682, 221, 75, 75));
        label_015->setMinimumSize(QSize(75, 75));
        label_015->setMaximumSize(QSize(75, 75));
        label_015->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid;\n"
"border-color: rgb(0, 0, 0)"));
        label_024 = new QLabel(play8x8);
        label_024->setObjectName("label_024");
        label_024->setGeometry(QRect(757, 296, 75, 75));
        label_024->setMinimumSize(QSize(75, 75));
        label_024->setMaximumSize(QSize(75, 75));
        label_024->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid;\n"
"border-color: rgb(0, 0, 0)"));
        label_022 = new QLabel(play8x8);
        label_022->setObjectName("label_022");
        label_022->setGeometry(QRect(610, 296, 75, 75));
        label_022->setMinimumSize(QSize(75, 75));
        label_022->setMaximumSize(QSize(75, 75));
        label_022->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid;\n"
"border-color: rgb(0, 0, 0)"));
        label_027 = new QLabel(play8x8);
        label_027->setObjectName("label_027");
        label_027->setGeometry(QRect(385, 367, 75, 75));
        label_027->setMinimumSize(QSize(75, 75));
        label_027->setMaximumSize(QSize(75, 75));
        label_027->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid;\n"
"border-color: rgb(0, 0, 0)"));
        label_030 = new QLabel(play8x8);
        label_030->setObjectName("label_030");
        label_030->setGeometry(QRect(610, 367, 75, 75));
        label_030->setMinimumSize(QSize(75, 75));
        label_030->setMaximumSize(QSize(75, 75));
        label_030->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid;\n"
"border-color: rgb(0, 0, 0)"));
        label_028 = new QLabel(play8x8);
        label_028->setObjectName("label_028");
        label_028->setGeometry(QRect(460, 367, 75, 75));
        label_028->setMinimumSize(QSize(75, 75));
        label_028->setMaximumSize(QSize(75, 75));
        label_028->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid;\n"
"border-color: rgb(0, 0, 0)"));
        label_025 = new QLabel(play8x8);
        label_025->setObjectName("label_025");
        label_025->setGeometry(QRect(235, 367, 75, 75));
        label_025->setMinimumSize(QSize(75, 75));
        label_025->setMaximumSize(QSize(75, 75));
        label_025->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid;\n"
"border-color: rgb(0, 0, 0)"));
        label_018 = new QLabel(play8x8);
        label_018->setObjectName("label_018");
        label_018->setGeometry(QRect(310, 296, 75, 75));
        label_018->setMinimumSize(QSize(75, 75));
        label_018->setMaximumSize(QSize(75, 75));
        label_018->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid;\n"
"border-color: rgb(0, 0, 0)"));
        label_032 = new QLabel(play8x8);
        label_032->setObjectName("label_032");
        label_032->setGeometry(QRect(757, 367, 75, 75));
        label_032->setMinimumSize(QSize(75, 75));
        label_032->setMaximumSize(QSize(75, 75));
        label_032->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid;\n"
"border-color: rgb(0, 0, 0)"));
        label_019 = new QLabel(play8x8);
        label_019->setObjectName("label_019");
        label_019->setGeometry(QRect(385, 296, 75, 75));
        label_019->setMinimumSize(QSize(75, 75));
        label_019->setMaximumSize(QSize(75, 75));
        label_019->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid;\n"
"border-color: rgb(0, 0, 0)"));
        label_017 = new QLabel(play8x8);
        label_017->setObjectName("label_017");
        label_017->setGeometry(QRect(235, 296, 75, 75));
        label_017->setMinimumSize(QSize(75, 75));
        label_017->setMaximumSize(QSize(75, 75));
        label_017->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid;\n"
"border-color: rgb(0, 0, 0)"));
        label_021 = new QLabel(play8x8);
        label_021->setObjectName("label_021");
        label_021->setGeometry(QRect(535, 296, 75, 75));
        label_021->setMinimumSize(QSize(75, 75));
        label_021->setMaximumSize(QSize(75, 75));
        label_021->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid;\n"
"border-color: rgb(0, 0, 0)"));
        label_031 = new QLabel(play8x8);
        label_031->setObjectName("label_031");
        label_031->setGeometry(QRect(682, 367, 75, 75));
        label_031->setMinimumSize(QSize(75, 75));
        label_031->setMaximumSize(QSize(75, 75));
        label_031->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid;\n"
"border-color: rgb(0, 0, 0)"));
        label_026 = new QLabel(play8x8);
        label_026->setObjectName("label_026");
        label_026->setGeometry(QRect(310, 367, 75, 75));
        label_026->setMinimumSize(QSize(75, 75));
        label_026->setMaximumSize(QSize(75, 75));
        label_026->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid;\n"
"border-color: rgb(0, 0, 0)"));
        label_020 = new QLabel(play8x8);
        label_020->setObjectName("label_020");
        label_020->setGeometry(QRect(460, 296, 75, 75));
        label_020->setMinimumSize(QSize(75, 75));
        label_020->setMaximumSize(QSize(75, 75));
        label_020->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid;\n"
"border-color: rgb(0, 0, 0)"));
        label_023 = new QLabel(play8x8);
        label_023->setObjectName("label_023");
        label_023->setGeometry(QRect(682, 296, 75, 75));
        label_023->setMinimumSize(QSize(75, 75));
        label_023->setMaximumSize(QSize(75, 75));
        label_023->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid;\n"
"border-color: rgb(0, 0, 0)"));
        label_029 = new QLabel(play8x8);
        label_029->setObjectName("label_029");
        label_029->setGeometry(QRect(535, 367, 75, 75));
        label_029->setMinimumSize(QSize(75, 75));
        label_029->setMaximumSize(QSize(75, 75));
        label_029->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid;\n"
"border-color: rgb(0, 0, 0)"));
        label_040 = new QLabel(play8x8);
        label_040->setObjectName("label_040");
        label_040->setGeometry(QRect(757, 441, 75, 75));
        label_040->setMinimumSize(QSize(75, 75));
        label_040->setMaximumSize(QSize(75, 75));
        label_040->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid;\n"
"border-color: rgb(0, 0, 0)"));
        label_038 = new QLabel(play8x8);
        label_038->setObjectName("label_038");
        label_038->setGeometry(QRect(610, 441, 75, 75));
        label_038->setMinimumSize(QSize(75, 75));
        label_038->setMaximumSize(QSize(75, 75));
        label_038->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid;\n"
"border-color: rgb(0, 0, 0)"));
        label_059 = new QLabel(play8x8);
        label_059->setObjectName("label_059");
        label_059->setGeometry(QRect(385, 658, 75, 75));
        label_059->setMinimumSize(QSize(75, 75));
        label_059->setMaximumSize(QSize(75, 75));
        label_059->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid;\n"
"border-color: rgb(0, 0, 0)"));
        label_056 = new QLabel(play8x8);
        label_056->setObjectName("label_056");
        label_056->setGeometry(QRect(757, 587, 75, 75));
        label_056->setMinimumSize(QSize(75, 75));
        label_056->setMaximumSize(QSize(75, 75));
        label_056->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid;\n"
"border-color: rgb(0, 0, 0)"));
        label_043 = new QLabel(play8x8);
        label_043->setObjectName("label_043");
        label_043->setGeometry(QRect(385, 512, 75, 75));
        label_043->setMinimumSize(QSize(75, 75));
        label_043->setMaximumSize(QSize(75, 75));
        label_043->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid;\n"
"border-color: rgb(0, 0, 0)"));
        label_054 = new QLabel(play8x8);
        label_054->setObjectName("label_054");
        label_054->setGeometry(QRect(610, 587, 75, 75));
        label_054->setMinimumSize(QSize(75, 75));
        label_054->setMaximumSize(QSize(75, 75));
        label_054->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid;\n"
"border-color: rgb(0, 0, 0)"));
        label_051 = new QLabel(play8x8);
        label_051->setObjectName("label_051");
        label_051->setGeometry(QRect(385, 587, 75, 75));
        label_051->setMinimumSize(QSize(75, 75));
        label_051->setMaximumSize(QSize(75, 75));
        label_051->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid;\n"
"border-color: rgb(0, 0, 0)"));
        label_055 = new QLabel(play8x8);
        label_055->setObjectName("label_055");
        label_055->setGeometry(QRect(682, 587, 75, 75));
        label_055->setMinimumSize(QSize(75, 75));
        label_055->setMaximumSize(QSize(75, 75));
        label_055->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid;\n"
"border-color: rgb(0, 0, 0)"));
        label_046 = new QLabel(play8x8);
        label_046->setObjectName("label_046");
        label_046->setGeometry(QRect(610, 512, 75, 75));
        label_046->setMinimumSize(QSize(75, 75));
        label_046->setMaximumSize(QSize(75, 75));
        label_046->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid;\n"
"border-color: rgb(0, 0, 0)"));
        label_057 = new QLabel(play8x8);
        label_057->setObjectName("label_057");
        label_057->setGeometry(QRect(235, 658, 75, 75));
        label_057->setMinimumSize(QSize(75, 75));
        label_057->setMaximumSize(QSize(75, 75));
        label_057->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid;\n"
"border-color: rgb(0, 0, 0)"));
        label_053 = new QLabel(play8x8);
        label_053->setObjectName("label_053");
        label_053->setGeometry(QRect(535, 587, 75, 75));
        label_053->setMinimumSize(QSize(75, 75));
        label_053->setMaximumSize(QSize(75, 75));
        label_053->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid;\n"
"border-color: rgb(0, 0, 0)"));
        label_060 = new QLabel(play8x8);
        label_060->setObjectName("label_060");
        label_060->setGeometry(QRect(460, 658, 75, 75));
        label_060->setMinimumSize(QSize(75, 75));
        label_060->setMaximumSize(QSize(75, 75));
        label_060->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid;\n"
"border-color: rgb(0, 0, 0)"));
        label_044 = new QLabel(play8x8);
        label_044->setObjectName("label_044");
        label_044->setGeometry(QRect(460, 512, 75, 75));
        label_044->setMinimumSize(QSize(75, 75));
        label_044->setMaximumSize(QSize(75, 75));
        label_044->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid;\n"
"border-color: rgb(0, 0, 0)"));
        label_041 = new QLabel(play8x8);
        label_041->setObjectName("label_041");
        label_041->setGeometry(QRect(235, 512, 75, 75));
        label_041->setMinimumSize(QSize(75, 75));
        label_041->setMaximumSize(QSize(75, 75));
        label_041->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid;\n"
"border-color: rgb(0, 0, 0)"));
        label_034 = new QLabel(play8x8);
        label_034->setObjectName("label_034");
        label_034->setGeometry(QRect(310, 441, 75, 75));
        label_034->setMinimumSize(QSize(75, 75));
        label_034->setMaximumSize(QSize(75, 75));
        label_034->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid;\n"
"border-color: rgb(0, 0, 0)"));
        label_064 = new QLabel(play8x8);
        label_064->setObjectName("label_064");
        label_064->setGeometry(QRect(757, 658, 75, 75));
        label_064->setMinimumSize(QSize(75, 75));
        label_064->setMaximumSize(QSize(75, 75));
        label_064->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid;\n"
"border-color: rgb(0, 0, 0)"));
        label_048 = new QLabel(play8x8);
        label_048->setObjectName("label_048");
        label_048->setGeometry(QRect(757, 512, 75, 75));
        label_048->setMinimumSize(QSize(75, 75));
        label_048->setMaximumSize(QSize(75, 75));
        label_048->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid;\n"
"border-color: rgb(0, 0, 0)"));
        label_049 = new QLabel(play8x8);
        label_049->setObjectName("label_049");
        label_049->setGeometry(QRect(235, 587, 75, 75));
        label_049->setMinimumSize(QSize(75, 75));
        label_049->setMaximumSize(QSize(75, 75));
        label_049->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid;\n"
"border-color: rgb(0, 0, 0)"));
        label_062 = new QLabel(play8x8);
        label_062->setObjectName("label_062");
        label_062->setGeometry(QRect(610, 658, 75, 75));
        label_062->setMinimumSize(QSize(75, 75));
        label_062->setMaximumSize(QSize(75, 75));
        label_062->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid;\n"
"border-color: rgb(0, 0, 0)"));
        label_063 = new QLabel(play8x8);
        label_063->setObjectName("label_063");
        label_063->setGeometry(QRect(682, 658, 75, 75));
        label_063->setMinimumSize(QSize(75, 75));
        label_063->setMaximumSize(QSize(75, 75));
        label_063->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid;\n"
"border-color: rgb(0, 0, 0)"));
        label_035 = new QLabel(play8x8);
        label_035->setObjectName("label_035");
        label_035->setGeometry(QRect(385, 441, 75, 75));
        label_035->setMinimumSize(QSize(75, 75));
        label_035->setMaximumSize(QSize(75, 75));
        label_035->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid;\n"
"border-color: rgb(0, 0, 0)"));
        label_052 = new QLabel(play8x8);
        label_052->setObjectName("label_052");
        label_052->setGeometry(QRect(460, 587, 75, 75));
        label_052->setMinimumSize(QSize(75, 75));
        label_052->setMaximumSize(QSize(75, 75));
        label_052->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid;\n"
"border-color: rgb(0, 0, 0)"));
        label_033 = new QLabel(play8x8);
        label_033->setObjectName("label_033");
        label_033->setGeometry(QRect(235, 441, 75, 75));
        label_033->setMinimumSize(QSize(75, 75));
        label_033->setMaximumSize(QSize(75, 75));
        label_033->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid;\n"
"border-color: rgb(0, 0, 0)"));
        label_037 = new QLabel(play8x8);
        label_037->setObjectName("label_037");
        label_037->setGeometry(QRect(535, 441, 75, 75));
        label_037->setMinimumSize(QSize(75, 75));
        label_037->setMaximumSize(QSize(75, 75));
        label_037->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid;\n"
"border-color: rgb(0, 0, 0)"));
        label_047 = new QLabel(play8x8);
        label_047->setObjectName("label_047");
        label_047->setGeometry(QRect(682, 512, 75, 75));
        label_047->setMinimumSize(QSize(75, 75));
        label_047->setMaximumSize(QSize(75, 75));
        label_047->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid;\n"
"border-color: rgb(0, 0, 0)"));
        label_058 = new QLabel(play8x8);
        label_058->setObjectName("label_058");
        label_058->setGeometry(QRect(310, 658, 75, 75));
        label_058->setMinimumSize(QSize(75, 75));
        label_058->setMaximumSize(QSize(75, 75));
        label_058->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid;\n"
"border-color: rgb(0, 0, 0)"));
        label_050 = new QLabel(play8x8);
        label_050->setObjectName("label_050");
        label_050->setGeometry(QRect(310, 587, 75, 75));
        label_050->setMinimumSize(QSize(75, 75));
        label_050->setMaximumSize(QSize(75, 75));
        label_050->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid;\n"
"border-color: rgb(0, 0, 0)"));
        label_042 = new QLabel(play8x8);
        label_042->setObjectName("label_042");
        label_042->setGeometry(QRect(310, 512, 75, 75));
        label_042->setMinimumSize(QSize(75, 75));
        label_042->setMaximumSize(QSize(75, 75));
        label_042->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid;\n"
"border-color: rgb(0, 0, 0)"));
        label_061 = new QLabel(play8x8);
        label_061->setObjectName("label_061");
        label_061->setGeometry(QRect(535, 658, 75, 75));
        label_061->setMinimumSize(QSize(75, 75));
        label_061->setMaximumSize(QSize(75, 75));
        label_061->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid;\n"
"border-color: rgb(0, 0, 0)"));
        label_036 = new QLabel(play8x8);
        label_036->setObjectName("label_036");
        label_036->setGeometry(QRect(460, 441, 75, 75));
        label_036->setMinimumSize(QSize(75, 75));
        label_036->setMaximumSize(QSize(75, 75));
        label_036->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid;\n"
"border-color: rgb(0, 0, 0)"));
        label_039 = new QLabel(play8x8);
        label_039->setObjectName("label_039");
        label_039->setGeometry(QRect(682, 441, 75, 75));
        label_039->setMinimumSize(QSize(75, 75));
        label_039->setMaximumSize(QSize(75, 75));
        label_039->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid;\n"
"border-color: rgb(0, 0, 0)"));
        label_045 = new QLabel(play8x8);
        label_045->setObjectName("label_045");
        label_045->setGeometry(QRect(535, 512, 75, 75));
        label_045->setMinimumSize(QSize(75, 75));
        label_045->setMaximumSize(QSize(75, 75));
        label_045->setStyleSheet(QString::fromUtf8("border-width: 2px;\n"
"border-style: solid;\n"
"border-color: rgb(0, 0, 0)"));

        retranslateUi(play8x8);

        QMetaObject::connectSlotsByName(play8x8);
    } // setupUi

    void retranslateUi(QDialog *play8x8)
    {
        play8x8->setWindowTitle(QCoreApplication::translate("play8x8", "Dialog", nullptr));
        btnreturn->setText(QCoreApplication::translate("play8x8", "\345\220\216\351\200\200", nullptr));
        label_01->setText(QString());
        btnBack->setText(QCoreApplication::translate("play8x8", "\350\277\224\345\233\236", nullptr));
        time_labl->setText(QCoreApplication::translate("play8x8", "\350\200\227\346\227\266\357\274\232", nullptr));
        pushButton_2->setText(QCoreApplication::translate("play8x8", "\350\277\230\345\216\237", nullptr));
        btnRestart->setText(QCoreApplication::translate("play8x8", "\351\207\215\345\274\200", nullptr));
        label->setText(QCoreApplication::translate("play8x8", "\346\255\245\346\225\260\357\274\232", nullptr));
        pushButton_3->setText(QCoreApplication::translate("play8x8", "\346\217\220\347\244\272", nullptr));
        label_02->setText(QString());
        label_03->setText(QString());
        label_04->setText(QString());
        label_05->setText(QString());
        label_06->setText(QString());
        label_07->setText(QString());
        label_08->setText(QString());
        label_09->setText(QString());
        label_014->setText(QString());
        label_010->setText(QString());
        label_011->setText(QString());
        label_016->setText(QString());
        label_013->setText(QString());
        label_012->setText(QString());
        label_015->setText(QString());
        label_024->setText(QString());
        label_022->setText(QString());
        label_027->setText(QString());
        label_030->setText(QString());
        label_028->setText(QString());
        label_025->setText(QString());
        label_018->setText(QString());
        label_032->setText(QString());
        label_019->setText(QString());
        label_017->setText(QString());
        label_021->setText(QString());
        label_031->setText(QString());
        label_026->setText(QString());
        label_020->setText(QString());
        label_023->setText(QString());
        label_029->setText(QString());
        label_040->setText(QString());
        label_038->setText(QString());
        label_059->setText(QString());
        label_056->setText(QString());
        label_043->setText(QString());
        label_054->setText(QString());
        label_051->setText(QString());
        label_055->setText(QString());
        label_046->setText(QString());
        label_057->setText(QString());
        label_053->setText(QString());
        label_060->setText(QString());
        label_044->setText(QString());
        label_041->setText(QString());
        label_034->setText(QString());
        label_064->setText(QString());
        label_048->setText(QString());
        label_049->setText(QString());
        label_062->setText(QString());
        label_063->setText(QString());
        label_035->setText(QString());
        label_052->setText(QString());
        label_033->setText(QString());
        label_037->setText(QString());
        label_047->setText(QString());
        label_058->setText(QString());
        label_050->setText(QString());
        label_042->setText(QString());
        label_061->setText(QString());
        label_036->setText(QString());
        label_039->setText(QString());
        label_045->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class play8x8: public Ui_play8x8 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAY8X8_H
