#ifndef VIENTO_H
#define VIENTO_H
#include "instrumento.h"

class Viento : public Instrumento
{
private:
    string clasificacion;
public:
    Viento();
    Viento(string nombre, string material, float costo, string clasificacion);
    string afinar();
    string obtenerDatos();
};

#endif // VIENTO_H
