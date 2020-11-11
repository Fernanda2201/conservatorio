#ifndef GENERAL_H
#define GENERAL_H
#include "instrumento.h"
#include "percusion.h"
#include "viento.h"


class General : public Instrumento
{
private:
    string nombreConservatorio;

    //Arreglo de objetos
    Instrumento instrumentos[10];

    //Total instrumentos ingresados
    int instrumentosIngresados;

public:
    General();
    //Sobrecarga
    General(string);
    //Metodo para pedir datos al usuario
    void ingresarInstrumentos();

   void listarInstrumentos();


};

#endif // GENERAL_H
