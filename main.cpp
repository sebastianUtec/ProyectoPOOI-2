#include <iostream>
#include "CArena.h"
#include <vector>
using namespace std;

int main() {
    int filas , columnas ;
    cout<<"ingrese las filas de la arena : ";cin>>filas;
    cout<<"Ingrese las columnas de la arena : ";cin>>columnas;
    CArena arenaCompetitiva(filas , columnas);
    arenaCompetitiva.imprimirArena();
    CObjeto mirobot(4 , 1 , 'R');
    arenaCompetitiva.agregarobjeto(mirobot);
    arenaCompetitiva.imprimirArena();
}
