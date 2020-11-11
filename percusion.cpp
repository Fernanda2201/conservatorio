#include "percusion.h"
#include "instrumento.h"

Percusion::Percusion() : Instrumento()
{
    this->altura = " ";
}

Percusion::Percusion(string nombre, string material, float costo,  string altura) : Instrumento(nombre,material,costo){

    this->altura = altura;
    this->tipo = "Percusion\n";
}

string Percusion::afinar(){
    return "Se afina tensando los tambores";
}

string Percusion::obtenerDatos()
{
        return Instrumento::obtenerDatos() + "Altura: " + altura+"\n";
}

