#ifndef COMBINACION_H
#define COMBINACION_H
#include <string>
#include <iostream>
#include <algorithm>
#include <list>
#include <cstdlib>
#include <bits/stdc++.h>

using namespace std;

class Combinacion
{
public:
    string colores[6] = { "azul", "celeste", "gris", "morado", "rojo", "verde" };
    string combinacion[4];

    Combinacion()   {}
    ~Combinacion()       { }

    void generarCombinacion(int repetible);

    int* calificarJugada(string jugada[4], int result[4]);
};

#endif // COMBINACION_H
