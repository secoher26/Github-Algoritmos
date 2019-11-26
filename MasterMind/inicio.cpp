#include "inicio.h"
#include "ui_inicio.h"

Inicio::Inicio(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Inicio)
{
    ui->setupUi(this);
}

Inicio::~Inicio()
{
    delete ui;
}

void Inicio::on_iniciarJuego_clicked()
{
    this->nivel = ui->nivelComobo->currentIndex() + 1;
    this->temporizador = ui->temporCombo->currentIndex() + 1;

    if(ui->repetibleCheckBox->isChecked()){
        this->repetible = 1;
    }else{
        this->repetible = 0;
    }

    this->gamewindow = new GameWindow);
    this->gamewindow->show();
}

void Inicio::on_salir_clicked()
{
    this->~Inicio();
}
