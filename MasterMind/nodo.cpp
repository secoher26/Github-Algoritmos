#include "nodo.h"
#include <iostream>

using namespace std;

Nodo::Nodo(string cadena) {
    this->cadena = cadena;
    siguiente = NULL;
}

Nodo::Nodo(string cadena, Nodo *nodoSiguiente) {
    this->cadena = cadena;
    siguiente = nodoSiguiente;
}

void Nodo::setSiguiente(Nodo *nodoSiguiente) {
    this->siguiente = nodoSiguiente;
}

string Nodo::getCadena() {
    return cadena;
}

Nodo* Nodo::getSiguiente() {
    return siguiente;
}

void Nodo::imprimir(){
    cout << this->cadena << endl;
}
