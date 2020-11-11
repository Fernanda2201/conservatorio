#ifndef CUERDA_H
#define CUERDA_H
#include "instrumento.h"

class Cuerda : public Instrumento
{
protected:

    string meLlamo;
public:
    Cuerda();
    Cuerda(string nombre, string material, float costo);

    //Sobreescritura
    string obtenerDatos();
    string afinar();
};

//Creacion de la clase guitarra

class Guitarra : public Cuerda{
private:
    string clasificacion;
public:
    Guitarra();
    //Sobrecarga
    Guitarra(string nombre, string material, float costo, string clasificacion);
    //Sobreescritura del virtual
    string obtenerDatos();
};

//Creacion de la clase violin

class Violin :  public Cuerda{
private:
    string clasificacion;
public:
    Violin();
    //Sobrecarga
    Violin(string nombre, string material, float costo, string clasificacion);
    //Sobreescritura del virtual
    string obtenerDatos();

};

class Piano : public Cuerda{
private:
    string clasificacion;
public:
    Piano();
    //Sobrecarga
    Piano(string nombre, string material, float costo, string clasificacion);
    //Sobreescritura

    string obtenerDatos();

};

#endif // CUERDA_H
