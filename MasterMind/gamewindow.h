#ifndef GAMEWINDOW_H
#define GAMEWINDOW_H

#include <QMainWindow>
#include "configuration.h"
#include "combinacion.h"
#include "game.h"
#include <iostream>
#include <string>
#include <QTimer>
#include <QMessageBox>
#include <QPdfWriter>
#include <QLabel>
#include <QRectF>
#include <QPainter>
#include <QUrl>
#include <QMessageBox>
#include <QDesktopServices>
#include "listaenlazada.h"


using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui { class GameWindow; }
QT_END_NAMESPACE

class GameWindow : public QMainWindow
{
    Q_OBJECT

public:
    GameWindow(QWidget *parent = nullptr);
    GameWindow(int nivel,int temporizador,int repetido,QWidget *parent = nullptr);
    ~GameWindow();

private slots:
    void on_btnIniciar_clicked();
    void fTimer();
    void fTimer2();
    void on_btn_Configuracion_clicked();
    void on_btnIniciar_2_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_botonVerde_clicked();

    void on_botonRojo_clicked();

    void on_botonMorado_clicked();

    void on_botonAmarillo_clicked();

    void on_botonAnaranjado_clicked();

    void on_bton1_clicked();

    void on_bton2_clicked();

    void on_bton3_clicked();

    void on_bton4_clicked();

    void on_calificarJugada_clicked();

    void on_guardarJuego_clicked();

    void on_deshacer_clicked();

    void on_CargarJuego_clicked();

    void on_btn1_clicked();

    void on_btn2_clicked();

    void on_btn3_clicked();

    void on_btn4_clicked();

    void on_btn5_clicked();

    void on_btn6_clicked();

    void on_btnCalificar_clicked();

private:
    Ui::GameWindow *ui;
    Configuration configuracion ;
    Combinacion combinacion;
    Game game;
    QTimer *cronometro;
    int nivel;
    int temporizador;
    int repetible;
    QString pathColor;
    string colorActual;
    ListaEnlazada *intento = new ListaEnlazada();
    ListaEnlazada *labels = new ListaEnlazada();
    int coorX = 10;
    int coorY = 450;

    int calificacionX = 560;
    int calificacionY = 460;

    int segundos = 0;
    int minutos = 0;
    int horas = 0;

    QLabel *label1;
    QLabel *label2;
    QLabel *label3;
    QLabel *label4;

    QLabel *labelCalificacion;
    QLabel *labelCalificacion2;
    QLabel *labelCalificacion3;
    QLabel *labelCalificacion4;
    int tope;

};
#endif // GAMEWINDOW_H
