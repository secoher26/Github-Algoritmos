#include "ListaEnlazada.h"
#include <iostream>
#include "Nodo.h"
using namespace std;

ListaEnlazada::ListaEnlazada() {
    primero = NULL;
}

ListaEnlazada::ListaEnlazada(Nodo *primerElemento) {
    primero = primerElemento;
}

bool ListaEnlazada::listaVacia() {
    return primero == NULL;
}

void ListaEnlazada::eliminarFinal() {

}

void ListaEnlazada::insertarFinal(string cadena) {
    if (listaVacia()) {
        primero = new Nodo(cadena);
    } else {
        Nodo *pAux = primero;
        while (pAux->siguiente != NULL) {
            pAux = pAux->siguiente;
        }
        pAux->siguiente = new Nodo(cadena);
    }
}

Nodo* ListaEnlazada::getPrimero() {
    return primero;
}

void ListaEnlazada::insertarInicio(string cadena) {
    if (listaVacia()) {
        primero = new Nodo(cadena);
    } else {
        primero = new Nodo(cadena,primero);
    }
}

void ListaEnlazada::eliminarInicio() {
    if (listaVacia()) {
        cout << "Pila vacía";
    } else {
        if (primero->getSiguiente() == NULL) {
            Nodo *pTemp = primero;
            primero = NULL;
            delete pTemp;
        } else {
            Nodo *pAux = primero;
            primero = primero->getSiguiente();
            delete pAux;
        }
    }
}

void ListaEnlazada::mostrar() {
    if (listaVacia()) {
        cout << "No hay elementos" << endl;
    } else {
        Nodo *pAux = primero;
    while (pAux) {
        cout << pAux->getCadena() << " -> ";
        pAux = pAux->getSiguiente();
    }
    cout << endl;
    }
}

void ListaEnlazada::setPrimero(Nodo *primerNodo) {
    this->primero = primerNodo;
}

Nodo* ListaEnlazada::obtenerPosicion(int pos){
    if (listaVacia()) {
        return NULL;
    } else {
        int cont = 0;
        Nodo *pAux = primero;
        while (pAux) {
            if (cont == pos){
                return pAux;
            }
            cont ++;
            pAux = pAux->getSiguiente();
        }
        return NULL;
    }
}
