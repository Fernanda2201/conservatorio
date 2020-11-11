#include "viento.h"

Viento::Viento()
{
    this->clasificacion = " ";
}

Viento::Viento(string nombre, string material, float costo,  string clasificacion) : Instrumento(nombre,material,costo)
{
    this->clasificacion = clasificacion;
    this->tipo = "Viento";

}
string Viento::afinar(){
    return "Se afina limpiando agujeros y valvulas\n";
}
string Viento::obtenerDatos()
{
        return Instrumento::obtenerDatos() + "\nClasificacion: " + clasificacion+"\n";
}

