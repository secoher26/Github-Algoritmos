#ifndef CONFIGURATION_H
#define CONFIGURATION_H


class Configuration
{

public:
    int nivel;
    int reloj;
    int limiteReloj;
    int repetible;
    Configuration() {}
    ~Configuration()   {}

    void cargarConfig();
    void cargarConfig(int pNivel, int pTemporizador, int pRepetible);

    void generarCombinacion(int repetible);
};

#endif // CONFIGURATION_H
