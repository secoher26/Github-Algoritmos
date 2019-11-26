#include "juego.h"
#include "cstdlib"
#include "ctime"
#include <iostream>

Juego::Juego()
{
    generarListaColores();
}

ListaEnlazada * Juego::getListaColores(){
    return listaColores;
}

void Juego::generarListaColores(){
    this->listaColores = new ListaEnlazada();
    this->listaColores->insertarFinal("blue");
    this->listaColores->insertarFinal("red");
    this->listaColores->insertarFinal("yellow");
    this->listaColores->insertarFinal("green");
    this->listaColores->insertarFinal("orange");
    this->listaColores->insertarFinal("purple");
}

void Juego::generarListaJuego(){

}
