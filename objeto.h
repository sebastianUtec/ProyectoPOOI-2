#ifndef PROYECTOPOOI-2_OBJETO_H
#define PROYECTOPOOI-2_OBJETO_H

#include <iostream>
using namespace std;
typedef string palabra;


class objeto {
private:
    palabra nombre;
    int posicion_x,posicion_y;
    palabra color;
    int danio;
public:
    objeto();
    void ubicarse en la arena();
    void moverse();
    ~objeto();

};
