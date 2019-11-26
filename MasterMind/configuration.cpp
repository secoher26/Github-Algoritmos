#include "configuration.h"


void Configuration::cargarConfig()
{
    //ifstream ifs("config.json");
    //Json::Reader reader;
    //Json::Value json;
    //reader.parse(ifs, json);

    //nivel = json["nivel"].asInt();
    nivel = 1;
    //reloj = json["reloj"].asInt();
    reloj = 0;
    //limiteReloj = json["limiteReloj"].asInt();
    limiteReloj = 120;
    //repetible = json["repetible"].asInt();
    repetible = 0;
}


void Configuration::cargarConfig(int pNivel, int pTemporizador, int pRepetible)
{
    this->nivel = pNivel;
    this->reloj = pTemporizador;
    this->repetible = pRepetible;
}
