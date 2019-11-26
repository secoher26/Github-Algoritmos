#ifndef NODO_H
#define NODO_H
#include <string>

using namespace std;

class Nodo {
    public:
        Nodo(string cadena);
        Nodo(string cadena, Nodo *nodoSiguiente);
        void setSiguiente(Nodo *nodoSiguiente);
        void imprimir();
        string getCadena();
        Nodo* getSiguiente();
    private:
        string cadena;
        Nodo *siguiente;
    friend class ListaEnlazada;
};
#endif
