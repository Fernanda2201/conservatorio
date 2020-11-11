#include "cuerda.h"
#include "instrumento.h"

Cuerda::Cuerda() : Instrumento()
{

}

Cuerda::Cuerda(string nombre, string material, float costo) : Instrumento(nombre,material,costo)
{
    this->tipo= "Cuerda";
    this->meLlamo = " ";
}

string Cuerda::obtenerDatos()
{
    return Instrumento::obtenerDatos();
}

string Cuerda::afinar(){
    return "Se afina ajustando Cuerdas\n";
}

//Clase guitarra

Guitarra::Guitarra() : Cuerda()
{
}

Guitarra::Guitarra(string nombre, string material, float costo, string clasificacion) : Cuerda(nombre,material,costo)
{

    this->clasificacion = " ";
    this->tipo = "Cuerda";
    this->meLlamo = "Guitarra";
}

string Guitarra::obtenerDatos()
{
    return Cuerda::obtenerDatos() + "\nTipo:" + clasificacion +
            "\nClase: " + this->meLlamo;
}





Violin::Violin(string nombre, string material, float costo, string clasificacion) : Cuerda(nombre, material,costo)
{
    this->clasificacion = " ";
    this->tipo= "Cuerda\n";
    this->meLlamo = "Violin";
}

string Violin::obtenerDatos()
{
    return Cuerda::obtenerDatos() + "\nTipo: "+ clasificacion +
            "\nClase: " +this->meLlamo;
}

Piano::Piano(string nombre, string material, float costo, string clasificacion) : Cuerda(nombre,material,costo)
{
    this->clasificacion = " ";

    this->tipo = "Cuerda\n";
    this->meLlamo = "Piano";
}

string Piano::obtenerDatos()
{
    return Cuerda::obtenerDatos() + "\nTipo: "+ clasificacion +
            "\nClase: " +this->meLlamo;
}
