#ifndef LISTAENLAZADA_H
#define LISTAENLAZADA_H
#include "nodo.h"

class ListaEnlazada {
    public:
        ListaEnlazada();
        ListaEnlazada(Nodo *primerElemento);
        bool listaVacia();
        void eliminarFinal();
        void insertarFinal(string cadena);
        Nodo* getPrimero();
        void insertarInicio(string cadena);
        void eliminarInicio();
        void mostrar();
        void setPrimero(Nodo *primerNodo);
        Nodo* obtenerPosicion(int pos);
    private:
        Nodo *primero;
};

#endif
