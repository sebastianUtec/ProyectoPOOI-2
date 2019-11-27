//
// Created by SEBASTIAN on 26/11/2019.
//

#ifndef PROYECTO2_COBJETO_H
#define PROYECTO2_COBJETO_H

#include <iostream>
using namespace std;

class CObjeto {
private:
    int posicionx;
    int posiciony;
    char caracter;
public:
    CObjeto(){posicionx=0;posiciony=0;}
    CObjeto(int x , int y , char caracter);
    char getcaracter(){return caracter;}
    int getposicionx(){ return posicionx;}
    int getposiciony(){ return posiciony;}
};


#endif //PROYECTO2_COBJETO_H
