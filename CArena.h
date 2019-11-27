//
// Created by SEBASTIAN on 26/11/2019.
//

#ifndef PROYECTO2_CARENA_H
#define PROYECTO2_CARENA_H

#include "CObjeto.h"

class CArena {
private:
    char **Arena;
    int filas;
    int columnas;

public:
    CArena();
    CArena(int filas , int columnas);
    void imprimirArena();
    void agregarobjeto(CObjeto &objetoagregado);
};


#endif //PROYECTO2_CARENA_H
