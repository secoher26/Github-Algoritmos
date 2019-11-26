#ifndef JUEGO_H
#define JUEGO_H
#include "listaenlazada.h"

class Juego
{
public:
    Juego();
    ListaEnlazada * getListaColores();
    void generarListaColores();
    void generarListaJuego();
private:
    ListaEnlazada * listaColores;
    ListaEnlazada * listaJuego;
};

#endif // JUEGO_H
