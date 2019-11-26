#ifndef INICIO_H
#define INICIO_H

#include <QMainWindow>
#include "gamewindow.h"

namespace Ui {
class Inicio;
}

class Inicio : public QMainWindow
{
    Q_OBJECT

public:
    explicit Inicio(QWidget *parent = nullptr);
    ~Inicio();

private slots:
    void on_iniciarJuego_clicked();

    void on_salir_clicked();

private:
    Ui::Inicio *ui;
    GameWindow *gamewindow;
    int repetible;
    int nivel;
    int temporizador;

};

#endif // INICIO_H
