#ifndef PERCUSION_H
#define PERCUSION_H
#include "instrumento.h"

class Percusion : public Instrumento
{
private:
    string altura;
public:
    Percusion();
    Percusion(string nombre, string material, float costo, string altura );
    string afinar();
    string obtenerDatos();
};

#endif // PERCUSION_H
