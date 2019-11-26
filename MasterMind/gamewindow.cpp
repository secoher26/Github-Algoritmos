#include "gamewindow.h"
#include "ui_gamewindow.h"


string playStack[100][4];
int n=100, top=-1;

void push(string* play) {
   if(top>=n-1)
      cout<<"Stack Overflow"<<endl;
   else
   {
      top++;
      for (int i = 0 ; i < 4 ; i++)
      {
          playStack[top][i]=*(play + i);
      }
   }
}

void pop(string* res) {
   if(top<=-1)
      cout<<"Stack Underflow"<<endl;
   else {
       cout << "The popped element is --- ";
      for (int i = 0 ; i < 4 ; i++)
      {
          cout << playStack[top][i] << " --- ";
          *(res + i)=playStack[top][i];
      }
      cout << endl;

      top--;
   }
}

GameWindow::GameWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::GameWindow)
{
    ui->setupUi(this);
    ui->btnTerminar->setFlat(true);

    //Carga los valores por default
    //Cargar configuracion
    this->nivel = 1;
    this->temporizador = 1;
    this->repetible = 1;

    this->configuracion = Configuration();
    this->configuracion.cargarConfig(nivel, temporizador, repetible);

    if (this->nivel == 1){
        ui->level->setText("NIVEL: FÁCIL");
    }else if(this->nivel == 2){
        ui->level->setText("NIVEL: MEDIO");
    }else if(this->nivel == 3){
        ui->level->setText("NIVEL: DIFÍCIL");
    }

}

GameWindow::~GameWindow()
{
    delete ui;
}

void GameWindow::fTimer()
{
    ui->lcdSegundos->display(segundos++);
    if (minutos>=5 && segundos>=30){
        QMessageBox termino;
        termino.critical(NULL, "Tiempo Finalizado", "Ha llegado al limite de tiempo!");
        cronometro->stop();
        this->~GameWindow();
    }
    if (segundos>60){
        segundos = 0;
        ui->lcdSegundos->display(segundos);
        minutos++;
        ui->lcdMinutos->display(minutos);
        if(minutos>60){
            minutos = 0;
            ui->lcdMinutos->display(minutos);
            horas++;
            ui->lcdHoras->display(horas);
        }
    }
}

void GameWindow::fTimer2()
{
    ui->lcdSegundos->display(segundos++);
    tope = 330/9-this->nivel;
    if (segundos>= tope){
        QMessageBox termino;
        termino.critical(NULL, "Tiempo Finalizado", "Ha llegado al limite de tiempo por jugada!");
        cronometro->stop();
        this->~GameWindow();
    }
    if (segundos>60){
        segundos = 0;
        ui->lcdSegundos->display(segundos);
        minutos++;
        ui->lcdMinutos->display(minutos);
        if(minutos>60){
            minutos = 0;
            ui->lcdMinutos->display(minutos);
            horas++;
            ui->lcdHoras->display(horas);
        }
    }
}

void GameWindow::on_btnIniciar_clicked()
{
    this->combinacion = Combinacion();
    this->combinacion.generarCombinacion(this->configuracion.repetible);

    QString qname = ui->NombreJugador->text();//Agarra el nombre de la UI
    string name= qname.toStdString();

    this->game = Game(name, this->configuracion.nivel);
    this->game.setDate();

    if (this->temporizador == 1){
        cronometro = new QTimer(this);
        connect(cronometro, SIGNAL(timeout()),this,SLOT(fTimer()));
        cronometro->start(1000);
    }else if (this->temporizador == 2) {
        cronometro = new QTimer(this);
        connect(cronometro, SIGNAL(timeout()),this,SLOT(fTimer2()));
        cronometro->start(1000);
    }else if (this->temporizador == 3) {
        ui->lcdSegundos->hide();
        ui->lcdMinutos->hide();
        ui->lcdHoras->hide();
    }

    ui->btnIniciar->setFlat(true);
    ui->btnTerminar->setFlat(false);
}

void GameWindow::on_btnIniciar_2_clicked()
{
    cronometro->stop();
    QMessageBox salir;
    salir.setText("¿Esta seguro/a que quiere salir?");
    salir.setStandardButtons(QMessageBox::Yes|QMessageBox::No);
    int ret = salir.exec();

    switch (ret) {
      case QMessageBox::Yes:
        segundos = 0;
        minutos = 0;
        horas = 0;
        this->~GameWindow();
        break;
      case QMessageBox::No:
        cronometro->start(1000);
        break;
      default:
        break;
    }
}


void GameWindow::on_pushButton_5_clicked()
{
    ListaEnlazada* lista = this->game.loadRecords();
    int coordenada = 300;
    QPdfWriter pdf("Records.pdf");
    QPainter painter(&pdf);
        painter.setPen(Qt::black);
        painter.drawText(200,0, "RANKING DE RECORDS");
    for(int i = 0; i<3;i++){
        if(lista->getPrimero() != nullptr){
            painter.drawText(100,coordenada,QString::fromStdString(lista->getPrimero()->getCadena()));
            coordenada+=150;
        }
        lista->eliminarInicio();
    }
    painter.end();

    QMessageBox::information(NULL, "Mensaje","Se ha generado el PDF de records");
}

void GameWindow::on_pushButton_clicked()
{
    QDesktopServices::openUrl(QUrl::fromLocalFile("Records.pdf"));
}

void GameWindow::on_pushButton_6_clicked()
{
    QDesktopServices::openUrl(QUrl::fromLocalFile("ManualUsuario.pdf"));
}

void GameWindow::on_bton1_clicked()
{
    ui->bton1->setStyleSheet(this->pathColor);
    this->intento->insertarFinal(this->colorActual);
    this->labels->insertarFinal(this->colorActual);
}

void GameWindow::on_bton2_clicked()
{
    ui->bton2->setStyleSheet(this->pathColor);
    this->intento->insertarFinal(this->colorActual);
    this->labels->insertarFinal(this->colorActual);
}

void GameWindow::on_bton3_clicked()
{
    ui->bton3->setStyleSheet(this->pathColor);
    this->intento->insertarFinal(this->colorActual);
    this->labels->insertarFinal(this->colorActual);
}

void GameWindow::on_bton4_clicked()
{
    ui->bton4->setStyleSheet(this->pathColor);
    this->intento->insertarFinal(this->colorActual);
    this->labels->insertarFinal(this->colorActual);
}



//GUARDAR Y CARGAR JUEGOr
void GameWindow::on_guardarJuego_clicked()
{
    //this->game.saveGame();
}


void GameWindow::on_CargarJuego_clicked()
{

}

void GameWindow::on_deshacer_clicked()
{
    this->game.numJugada--;
    calificacionY +=60;
    coorY +=60;
    ui->NumeroJugada->setText(QString::fromStdString(std::to_string(this->game.numJugada)));
    playStack[0];

    this->label1->~QLabel();
    this->label2->~QLabel();
    this->label3->~QLabel();
    this->label4->~QLabel();

    this->labelCalificacion->~QLabel();
    this->labelCalificacion2->~QLabel();
    this->labelCalificacion3->~QLabel();
    this->labelCalificacion4->~QLabel();


    ui->bton1->setStyleSheet("border-image: url(:/imagenes/imagenes/"+QString::fromStdString(playStack[0][0])+".png);");
    ui->bton2->setStyleSheet("border-image: url(:/imagenes/imagenes/"+QString::fromStdString(playStack[0][1])+".png);");
    ui->bton3->setStyleSheet("border-image: url(:/imagenes/imagenes/"+QString::fromStdString(playStack[0][2])+".png);");
    ui->bton4->setStyleSheet("border-image: url(:/imagenes/imagenes/"+QString::fromStdString(playStack[0][3])+".png);");

    pop(playStack[0]);
}

void GameWindow::on_btn_Configuracion_clicked()
{

}





void GameWindow::on_btn1_clicked()
{
    QString name = QString::fromStdString(combinacion.colores[0]);
    QString path = "border-image: url(:/imagenes/imagenes/";
    path += name;
    path += ".png);";
    this->pathColor = path;
    this->colorActual = combinacion.colores[0];
}

void GameWindow::on_btn2_clicked()
{
    QString name = QString::fromStdString(combinacion.colores[0]);
    QString path = "border-image: url(:/imagenes/imagenes/";
    path += name;
    path += ".png);";
    this->pathColor = path;
    this->colorActual = combinacion.colores[1];
}

void GameWindow::on_btn3_clicked()
{
    QString name = QString::fromStdString(combinacion.colores[0]);
    QString path = "border-image: url(:/imagenes/imagenes/";
    path += name;
    path += ".png);";
    this->pathColor = path;
    this->colorActual = combinacion.colores[2];
}

void GameWindow::on_btn4_clicked()
{
    QString name = QString::fromStdString(combinacion.colores[0]);
    QString path = "border-image: url(:/imagenes/imagenes/";
    path += name;
    path += ".png);";
    this->pathColor = path;
    this->colorActual = combinacion.colores[3];
}


void GameWindow::on_btn5_clicked()
{
    QString name = QString::fromStdString(combinacion.colores[0]);
    QString path = "border-image: url(:/imagenes/imagenes/";
    path += name;
    path += ".png);";
    this->pathColor = path;
    this->colorActual = combinacion.colores[4];
}

void GameWindow::on_btn6_clicked()
{
    QString name = QString::fromStdString(combinacion.colores[0]);
    QString path = "border-image: url(:/imagenes/imagenes/";
    path += name;
    path += ".png);";
    this->pathColor = path;
    this->colorActual = combinacion.colores[5];
}

void GameWindow::on_btnCalificar_clicked()
{
    if(this->temporizador == 2){
        segundos = 0;
    }

    if(this->game.numJugada <= 9-nivel){
        this->game.numJugada++;
        string display = to_string(this->game.numJugada);
        ui->NumeroJugada->setText(QString::fromStdString(display));

        string arrayintento[4];
        int resultado[4] = {0,0,0,0};

        for(int i =0; i<4;i++){
            if (!this->intento->listaVacia()){
                arrayintento[i] = this->intento->getPrimero()->getCadena();
            }
            this->intento->eliminarInicio();
        }

        this->combinacion.calificarJugada(arrayintento,resultado);


        ui->bton1->setStyleSheet("border-image: url(:/images/images/circle.png);");
        ui->bton2->setStyleSheet("border-image: url(:/images/images/circle.png);");
        ui->bton3->setStyleSheet("border-image: url(:/images/images/circle.png);");
        ui->bton4->setStyleSheet("border-image: url(:/images/images/circle.png);");

        this->intento = new ListaEnlazada();

        push(arrayintento);

        if (resultado[0] == 2 && resultado[1] == 2 && resultado[2] == 2 && resultado[3]){
            cronometro->stop();
            QMessageBox::information(NULL, "GANO!", "Felicitaciones Gano el juego!");
            this->game.saveRecord();
        }else{
            if(!arrayintento[0].empty()){
                label1 = new QLabel(this);
                label1->setStyleSheet("image: url(:/imagenes/imagenes/"+QString::fromStdString(arrayintento[0])+".png);");
                label1->setGeometry(coorX, coorY, 51,51);
                label1->show();


                label2 = new QLabel(this);
                label2->setStyleSheet("image: url(:/imagenes/imagenes/"+QString::fromStdString(arrayintento[1])+".png);");
                label2->setGeometry(coorX+60, coorY, 51,51);
                label2->show();

                label3 = new QLabel(this);
                label3->setStyleSheet("image: url(:/imagenes/imagenes/"+QString::fromStdString(arrayintento[2])+".png);");
                label3->setGeometry(coorX+120, coorY, 51,51);
                label3->show();

                label4 = new QLabel(this);
                label4->setStyleSheet("image: url(:/imagenes/imagenes/"+QString::fromStdString(arrayintento[3])+".png);");
                label4->setGeometry(coorX+180, coorY, 51,51);
                label4->show();
                coorY -=60;

                if (resultado[0] == 2){
                    labelCalificacion = new QLabel(this);
                    labelCalificacion->setStyleSheet("image: url(:/imagenes/imagenes/negro.png);");
                    labelCalificacion->setGeometry(calificacionX, calificacionY, 41,21);
                    labelCalificacion->show();
                }else{
                    labelCalificacion = new QLabel(this);
                    labelCalificacion->setStyleSheet("image: url(:/imagenes/imagenes/blanco.png);");
                    labelCalificacion->setGeometry(calificacionX, calificacionY, 41,21);
                    labelCalificacion->show();
                }

                if (resultado[1] == 2){
                    labelCalificacion2 = new QLabel(this);
                    labelCalificacion2->setStyleSheet("image: url(:/imagenes/imagenes/negro.png);");
                    labelCalificacion2->setGeometry(calificacionX+30, calificacionY, 41,21);
                    labelCalificacion2->show();
                }else{
                    labelCalificacion2 = new QLabel(this);
                    labelCalificacion2->setStyleSheet("image: url(:/imagenes/imagenes/blanco.png);");
                    labelCalificacion2->setGeometry(calificacionX+30, calificacionY, 41,21);
                    labelCalificacion2->show();
                }
                if (resultado[2] == 2){
                    labelCalificacion3 = new QLabel(this);
                    labelCalificacion3->setStyleSheet("image: url(:/imagenes/imagenes/negro.png);");
                    labelCalificacion3->setGeometry(calificacionX, calificacionY+30, 41,21);
                    labelCalificacion3->show();
                }else {
                    labelCalificacion3 = new QLabel(this);
                    labelCalificacion3->setStyleSheet("image: url(:/imagenes/imagenes/blanco.png);");
                    labelCalificacion3->setGeometry(calificacionX, calificacionY+30, 41,21);
                    labelCalificacion3->show();
                }
                if (resultado[3] == 2){
                    labelCalificacion4 = new QLabel(this);
                    labelCalificacion4->setStyleSheet("image: url(:/imagenes/imagenes/negro.png);");
                    labelCalificacion4->setGeometry(calificacionX+30, calificacionY+30, 41,21);
                    labelCalificacion4->show();
                }else{
                    labelCalificacion4 = new QLabel(this);
                    labelCalificacion4->setStyleSheet("image: url(:/imagenes/imagenes/blanco.png);");
                    labelCalificacion4->setGeometry(calificacionX+30, calificacionY+30, 41,21);
                    labelCalificacion4->show();
                }

                calificacionY -=60;
            }
            else{
                label1 = new QLabel(this);
                label1->setStyleSheet("image: url(:/imagenes/imagenes/vacio.png);");
                label1->setGeometry(coorX, coorY, 51,51);
                label1->show();


                label2 = new QLabel(this);
                label2->setStyleSheet("image: url(:/imagenes/imagenes/vacio.png);");
                label2->setGeometry(coorX+60, coorY, 51,51);
                label2->show();

                label3 = new QLabel(this);
                label3->setStyleSheet("image: url(:/imagenes/imagenes/vacio.png);");
                label3->setGeometry(coorX+120, coorY, 51,51);
                label3->show();

                label4 = new QLabel(this);
                label4->setStyleSheet("image: url(:/imagenes/imagenes/vacio.png);");
                label4->setGeometry(coorX+180, coorY, 51,51);
                label4->show();
                coorY -=60;

                labelCalificacion = new QLabel(this);
                labelCalificacion->setStyleSheet("image: url(:/imagenes/imagenes/vacio.png);");
                labelCalificacion->setGeometry(calificacionX, calificacionY, 41,21);
                labelCalificacion->show();

                labelCalificacion2 = new QLabel(this);
                labelCalificacion2->setStyleSheet("image: url(:/imagenes/imagenes/vacio.png);");
                labelCalificacion2->setGeometry(calificacionX+30, calificacionY, 41,21);
                labelCalificacion2->show();

                labelCalificacion3 = new QLabel(this);
                labelCalificacion3->setStyleSheet("image: url(:/imagenes/imagenes/vacio.png);");
                labelCalificacion3->setGeometry(calificacionX, calificacionY+30, 41,21);
                labelCalificacion3->show();

                labelCalificacion4 = new QLabel(this);
                labelCalificacion4->setStyleSheet("image: url(:/imagenes/imagenes/vacio.png);");
                labelCalificacion4->setGeometry(calificacionX+30, calificacionY+30, 41,21);
                labelCalificacion4->show();

                calificacionY -=60;
            }

        }



    }else{
        QMessageBox::critical(nullptr, "Final Juego", "Se han acabado la cantidad de jugadas, intentelo en un nuevo juego");
        this->~GameWindow();
    }
}
