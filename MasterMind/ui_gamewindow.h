/********************************************************************************
** Form generated from reading UI file 'gamewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEWINDOW_H
#define UI_GAMEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GameWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QPushButton *btnIniciar;
    QPushButton *btnTerminar;
    QPushButton *btnDeshacer;
    QPushButton *btnCalificar;
    QPushButton *btnGuardar;
    QPushButton *btnCargar;
    QLabel *level;
    QLCDNumber *lcdSegundos;
    QLCDNumber *lcdHoras;
    QLCDNumber *lcdMinutos;
    QLineEdit *NombreJugador;
    QPushButton *bton1;
    QPushButton *bton3;
    QPushButton *bton2;
    QPushButton *bton4;
    QLabel *NumeroJugada;
    QPushButton *btn1;
    QPushButton *btn2;
    QPushButton *btn3;
    QPushButton *btn4;
    QPushButton *btn5;
    QPushButton *btn6;
    QLabel *jugador;
    QLabel *tiempo;
    QLabel *tiempo_2;
    QLabel *tiempo_3;
    QLabel *jugador_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *GameWindow)
    {
        if (GameWindow->objectName().isEmpty())
            GameWindow->setObjectName(QString::fromUtf8("GameWindow"));
        GameWindow->resize(1104, 663);
        centralwidget = new QWidget(GameWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setMouseTracking(false);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(-10, 10, 1121, 631));
        label->setStyleSheet(QString::fromUtf8("image: url(:/imagenes/imagenes/space.jpg);"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(490, 10, 601, 141));
        label_2->setStyleSheet(QString::fromUtf8("image: url(:/imagenes/imagenes/logo.png);"));
        btnIniciar = new QPushButton(centralwidget);
        btnIniciar->setObjectName(QString::fromUtf8("btnIniciar"));
        btnIniciar->setGeometry(QRect(550, 150, 161, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Courier New"));
        font.setPointSize(12);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(9);
        btnIniciar->setFont(font);
        btnIniciar->setCursor(QCursor(Qt::PointingHandCursor));
        btnIniciar->setStyleSheet(QString::fromUtf8("font: 75 12pt \"Courier New\";"));
        btnIniciar->setAutoDefault(false);
        btnIniciar->setFlat(false);
        btnTerminar = new QPushButton(centralwidget);
        btnTerminar->setObjectName(QString::fromUtf8("btnTerminar"));
        btnTerminar->setGeometry(QRect(730, 150, 161, 31));
        btnTerminar->setFont(font);
        btnTerminar->setCursor(QCursor(Qt::PointingHandCursor));
        btnTerminar->setStyleSheet(QString::fromUtf8("font: 75 12pt \"Courier New\";"));
        btnDeshacer = new QPushButton(centralwidget);
        btnDeshacer->setObjectName(QString::fromUtf8("btnDeshacer"));
        btnDeshacer->setGeometry(QRect(910, 210, 161, 31));
        btnDeshacer->setFont(font);
        btnDeshacer->setCursor(QCursor(Qt::PointingHandCursor));
        btnDeshacer->setStyleSheet(QString::fromUtf8("font: 75 12pt \"Courier New\";"));
        btnCalificar = new QPushButton(centralwidget);
        btnCalificar->setObjectName(QString::fromUtf8("btnCalificar"));
        btnCalificar->setGeometry(QRect(910, 150, 161, 31));
        btnCalificar->setFont(font);
        btnCalificar->setCursor(QCursor(Qt::PointingHandCursor));
        btnCalificar->setStyleSheet(QString::fromUtf8("font: 75 12pt \"Courier New\";"));
        btnGuardar = new QPushButton(centralwidget);
        btnGuardar->setObjectName(QString::fromUtf8("btnGuardar"));
        btnGuardar->setGeometry(QRect(550, 210, 161, 31));
        btnGuardar->setFont(font);
        btnGuardar->setCursor(QCursor(Qt::PointingHandCursor));
        btnGuardar->setStyleSheet(QString::fromUtf8("font: 75 12pt \"Courier New\";"));
        btnCargar = new QPushButton(centralwidget);
        btnCargar->setObjectName(QString::fromUtf8("btnCargar"));
        btnCargar->setGeometry(QRect(730, 210, 161, 31));
        btnCargar->setFont(font);
        btnCargar->setCursor(QCursor(Qt::PointingHandCursor));
        btnCargar->setStyleSheet(QString::fromUtf8("font: 75 12pt \"Courier New\";"));
        level = new QLabel(centralwidget);
        level->setObjectName(QString::fromUtf8("level"));
        level->setGeometry(QRect(660, 310, 251, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Courier New"));
        font1.setPointSize(16);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(9);
        level->setFont(font1);
        level->setLayoutDirection(Qt::LeftToRight);
        level->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 75 16pt \"Courier New\";"));
        level->setScaledContents(false);
        lcdSegundos = new QLCDNumber(centralwidget);
        lcdSegundos->setObjectName(QString::fromUtf8("lcdSegundos"));
        lcdSegundos->setGeometry(QRect(1030, 430, 61, 31));
        lcdHoras = new QLCDNumber(centralwidget);
        lcdHoras->setObjectName(QString::fromUtf8("lcdHoras"));
        lcdHoras->setGeometry(QRect(620, 430, 61, 31));
        lcdMinutos = new QLCDNumber(centralwidget);
        lcdMinutos->setObjectName(QString::fromUtf8("lcdMinutos"));
        lcdMinutos->setGeometry(QRect(810, 430, 61, 31));
        NombreJugador = new QLineEdit(centralwidget);
        NombreJugador->setObjectName(QString::fromUtf8("NombreJugador"));
        NombreJugador->setGeometry(QRect(790, 370, 301, 31));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Courier New"));
        font2.setPointSize(10);
        NombreJugador->setFont(font2);
        NombreJugador->setStyleSheet(QString::fromUtf8("color: rgb(145, 145, 145);"));
        bton1 = new QPushButton(centralwidget);
        bton1->setObjectName(QString::fromUtf8("bton1"));
        bton1->setGeometry(QRect(70, 550, 51, 51));
        bton1->setStyleSheet(QString::fromUtf8("border-image: url(:/imagenes/imagenes/vacio.png);\n"
"\n"
""));
        bton3 = new QPushButton(centralwidget);
        bton3->setObjectName(QString::fromUtf8("bton3"));
        bton3->setGeometry(QRect(190, 550, 51, 51));
        bton3->setStyleSheet(QString::fromUtf8("border-image: url(:/imagenes/imagenes/vacio.png);"));
        bton2 = new QPushButton(centralwidget);
        bton2->setObjectName(QString::fromUtf8("bton2"));
        bton2->setGeometry(QRect(130, 550, 51, 51));
        bton2->setStyleSheet(QString::fromUtf8("border-image: url(:/imagenes/imagenes/vacio.png);"));
        bton4 = new QPushButton(centralwidget);
        bton4->setObjectName(QString::fromUtf8("bton4"));
        bton4->setGeometry(QRect(250, 550, 51, 51));
        bton4->setStyleSheet(QString::fromUtf8("border-image: url(:/imagenes/imagenes/vacio.png);"));
        NumeroJugada = new QLabel(centralwidget);
        NumeroJugada->setObjectName(QString::fromUtf8("NumeroJugada"));
        NumeroJugada->setGeometry(QRect(30, 550, 31, 51));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Courier New"));
        font3.setPointSize(18);
        font3.setBold(false);
        font3.setItalic(false);
        font3.setWeight(9);
        NumeroJugada->setFont(font3);
        NumeroJugada->setStyleSheet(QString::fromUtf8("font: 75 18pt \"Courier New\";\n"
"color: rgb(255, 255, 255);"));
        btn1 = new QPushButton(centralwidget);
        btn1->setObjectName(QString::fromUtf8("btn1"));
        btn1->setGeometry(QRect(610, 500, 51, 51));
        btn1->setCursor(QCursor(Qt::OpenHandCursor));
        btn1->setStyleSheet(QString::fromUtf8("border-image: url(:/imagenes/imagenes/azul.png);"));
        btn2 = new QPushButton(centralwidget);
        btn2->setObjectName(QString::fromUtf8("btn2"));
        btn2->setGeometry(QRect(680, 500, 51, 51));
        btn2->setCursor(QCursor(Qt::OpenHandCursor));
        btn2->setStyleSheet(QString::fromUtf8("border-image: url(:/imagenes/imagenes/celeste.png);"));
        btn3 = new QPushButton(centralwidget);
        btn3->setObjectName(QString::fromUtf8("btn3"));
        btn3->setGeometry(QRect(750, 500, 51, 51));
        btn3->setCursor(QCursor(Qt::OpenHandCursor));
        btn3->setStyleSheet(QString::fromUtf8("border-image: url(:/imagenes/imagenes/gris.png);"));
        btn4 = new QPushButton(centralwidget);
        btn4->setObjectName(QString::fromUtf8("btn4"));
        btn4->setGeometry(QRect(820, 500, 51, 51));
        btn4->setCursor(QCursor(Qt::OpenHandCursor));
        btn4->setStyleSheet(QString::fromUtf8("border-image: url(:/imagenes/imagenes/morado.png);"));
        btn5 = new QPushButton(centralwidget);
        btn5->setObjectName(QString::fromUtf8("btn5"));
        btn5->setGeometry(QRect(890, 500, 51, 51));
        btn5->setCursor(QCursor(Qt::OpenHandCursor));
        btn5->setStyleSheet(QString::fromUtf8("border-image: url(:/imagenes/imagenes/rojo.png);"));
        btn5->setFlat(false);
        btn6 = new QPushButton(centralwidget);
        btn6->setObjectName(QString::fromUtf8("btn6"));
        btn6->setGeometry(QRect(960, 500, 51, 51));
        btn6->setCursor(QCursor(Qt::OpenHandCursor));
        btn6->setStyleSheet(QString::fromUtf8("border-image: url(:/imagenes/imagenes/verde.png);"));
        jugador = new QLabel(centralwidget);
        jugador->setObjectName(QString::fromUtf8("jugador"));
        jugador->setGeometry(QRect(540, 370, 251, 31));
        jugador->setFont(font1);
        jugador->setLayoutDirection(Qt::LeftToRight);
        jugador->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 75 16pt \"Courier New\";"));
        jugador->setScaledContents(false);
        tiempo = new QLabel(centralwidget);
        tiempo->setObjectName(QString::fromUtf8("tiempo"));
        tiempo->setGeometry(QRect(540, 430, 81, 31));
        tiempo->setFont(font1);
        tiempo->setLayoutDirection(Qt::LeftToRight);
        tiempo->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 75 16pt \"Courier New\";"));
        tiempo->setScaledContents(false);
        tiempo_2 = new QLabel(centralwidget);
        tiempo_2->setObjectName(QString::fromUtf8("tiempo_2"));
        tiempo_2->setGeometry(QRect(710, 430, 101, 31));
        tiempo_2->setFont(font1);
        tiempo_2->setLayoutDirection(Qt::LeftToRight);
        tiempo_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 75 16pt \"Courier New\";"));
        tiempo_2->setScaledContents(false);
        tiempo_3 = new QLabel(centralwidget);
        tiempo_3->setObjectName(QString::fromUtf8("tiempo_3"));
        tiempo_3->setGeometry(QRect(910, 430, 121, 31));
        tiempo_3->setFont(font1);
        tiempo_3->setLayoutDirection(Qt::LeftToRight);
        tiempo_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 75 16pt \"Courier New\";"));
        tiempo_3->setScaledContents(false);
        jugador_2 = new QLabel(centralwidget);
        jugador_2->setObjectName(QString::fromUtf8("jugador_2"));
        jugador_2->setGeometry(QRect(490, 510, 121, 31));
        jugador_2->setFont(font1);
        jugador_2->setLayoutDirection(Qt::LeftToRight);
        jugador_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 75 16pt \"Courier New\";"));
        jugador_2->setScaledContents(false);
        GameWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(GameWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1104, 21));
        GameWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(GameWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        GameWindow->setStatusBar(statusbar);

        retranslateUi(GameWindow);

        btnIniciar->setDefault(false);


        QMetaObject::connectSlotsByName(GameWindow);
    } // setupUi

    void retranslateUi(QMainWindow *GameWindow)
    {
        GameWindow->setWindowTitle(QApplication::translate("GameWindow", "GameWindow", nullptr));
        label->setText(QString());
        label_2->setText(QString());
        btnIniciar->setText(QApplication::translate("GameWindow", "INICIAR JUEGO", nullptr));
        btnTerminar->setText(QApplication::translate("GameWindow", "TERMINAR JUEGO", nullptr));
        btnDeshacer->setText(QApplication::translate("GameWindow", "DESHACER", nullptr));
        btnCalificar->setText(QApplication::translate("GameWindow", "CALIFICAR", nullptr));
        btnGuardar->setText(QApplication::translate("GameWindow", "GUARDAR JUEGO", nullptr));
        btnCargar->setText(QApplication::translate("GameWindow", "CARGAR JUEGO", nullptr));
        level->setText(QApplication::translate("GameWindow", "DIFICULTAD: F\303\201CIL", nullptr));
        NombreJugador->setText(QString());
        bton1->setText(QString());
        bton3->setText(QString());
        bton2->setText(QString());
        bton4->setText(QString());
        NumeroJugada->setText(QApplication::translate("GameWindow", "1", nullptr));
        btn1->setText(QString());
        btn2->setText(QString());
        btn3->setText(QString());
        btn4->setText(QString());
        btn5->setText(QString());
        btn6->setText(QString());
        jugador->setText(QApplication::translate("GameWindow", "Nombre del Jugador:", nullptr));
        tiempo->setText(QApplication::translate("GameWindow", "Horas:", nullptr));
        tiempo_2->setText(QApplication::translate("GameWindow", "Minutos:", nullptr));
        tiempo_3->setText(QApplication::translate("GameWindow", "Segundos:", nullptr));
        jugador_2->setText(QApplication::translate("GameWindow", "Opciones:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GameWindow: public Ui_GameWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEWINDOW_H
