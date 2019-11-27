//
// Created by SEBASTIAN on 26/11/2019.
//
#include <iostream>
#include "CArena.h"
using namespace std;
CArena::CArena() {
    Arena= nullptr;
}
CArena::CArena(int filas, int columnas) {
    this->filas=filas;
    this->columnas=columnas;
    Arena=new char*[filas];
    for(int i=0 ;i<filas ;i++){
        Arena[i]=new char[columnas];
    }
    for(int i=0 ;i < filas ;i++){
        for(int j=0 ; j<columnas ; j++){
            Arena[i][j]='0';
        }
    }
}
void CArena::imprimirArena() {
    cout<<endl;
    for(int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
            cout<<Arena[i][j]<<" ";
        }
        cout<<endl;
    }
}
void CArena::agregarobjeto(CObjeto &objetoagregado) {
    int x1 , y1;
    x1=objetoagregado.getposicionx();
    y1=objetoagregado.getposiciony();
    Arena[x1][y1]=objetoagregado.getcaracter();
}
