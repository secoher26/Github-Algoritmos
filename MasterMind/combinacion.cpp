#include "combinacion.h"

void Combinacion::generarCombinacion(int repetible){
    int num;
    srand(time(0));
    if (repetible)
    {
        for (int i = 0; i < 4; i++){
            num = rand()%6;
            combinacion[i] = colores[num];

        }
    }
    else{
        int verify = 1;
        for (int i = 0; i < 4; i++){
            verify=1;
            num = rand()%6;
            for(int r=0;r<i; r++)
            {
                if (combinacion[r] == colores[num]){
                    verify=0; break;}
            }
            if (!verify)
            {
                i--;
                continue;
            }
            combinacion[i] = colores[num];

        }
    }

    for (int i = 0; i < 4; i++){
        cout<<"Color "<<i << " es " << combinacion[i]<<"\n";
    }
}

int* Combinacion::calificarJugada(string* jugada, int* resul){
    //int response[4];
    //static int *resul = response;
    cout << "Entra en combinacion" << endl;
    bool blanca = false;
    bool negra = false;
    //Busca pins Blancas y Negras
    for (int i = 0; i < 4 ; i ++)
    {
        for (int b = 0 ; b< 4 ; b++)
        {
            cout << "la jugada " << b <<"tiene el color" << *(jugada + b)<<endl;
            if (combinacion[i] == *(jugada + b) && i==b)
                negra=true;
            else if (combinacion[i] == *(jugada + b) && i!=b)
                blanca = true;

        }
        if (blanca)
            *(resul + i) = 1; //Marca blanca
        if (negra)
            *(resul + i) = 2; //Marca Negra
        blanca = false;
        negra = false;
        cout << "la resultado " << i <<"tiene el pin" << *(resul + i)<<endl;
    }
    //cout << "Primer: "<< *(resul) <<"Seg: "<<*(resul + 1) <<"Ter: "<<*(resul + 2) <<"Cua: "<<*(resul + 3)<<endl;
    random_shuffle(resul, resul + 4);
    cout << "Primer: "<< *(resul)  <<"Seg: "<<*(resul + 1) <<"Ter: "<<*(resul + 2)<<"Cua: "<<*(resul + 3)<<endl;
    return resul;
}
