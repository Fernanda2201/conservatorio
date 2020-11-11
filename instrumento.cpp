#include "instrumento.h"


Instrumento::Instrumento()
{
    this->nombre = " ";
    this->material = " ";
    this->costo = 0.0;
    this->tipo = " ";
}

Instrumento::Instrumento(string nombre, string material, float costo)
{
    this->nombre = nombre;
    this->material = material;
    this->costo = costo;

    //Asignar un numero id al instrumento

    this->id = Instrumento::totalInstrumentos;

    Instrumento::totalInstrumentos++;
}

string Instrumento::afinar()
{
    return " ";
}

string Instrumento::obtenerDatos()
{
    return "\nID:" +to_string(this->id+1) + "\n"+
            "Nombre: "+nombre+ "\n"+
            "Material: "+material+ "\n"+
            "Costo: "+ to_string(costo)+ "\n"+
            "Tipo: " + this->tipo;

}



string Instrumento::getNombre(){
    return this->nombre;
}

string Instrumento::getCosto(){
    return to_string(this->costo);
}
