#ifndef GAME_H
#define GAME_H
#include <iostream>
#include <string>
#include <algorithm>
#include <fstream>
#include "listaenlazada.h"
/*#include <jsoncpp/json/json.h>
#include <jsoncpp/json/writer.h>*/



using namespace std;

class Game
{
public:
    string player;
    double timeTaken;
    string solvedCombination[4];
    string datePlayed;
    double* timeXPlay;
    int numJugada = 1 ;
    int level;
    Game(){}
    Game(string name, int level);
    ~Game()   {}

    void addTimePlay(double time);
    void saveGame();
    void loadGame();
    void saveRecord();
    ListaEnlazada* loadRecords();

    void setDate();
    void setDate(string date);

    //Antes de guardar se corre para sumar todos los tiempo por jugada
    void calculateTotalTime();

};

#endif // GAME_H
