#include "general.h"
#include"viento.h"
#include"percusion.h"

#include <iostream>

using namespace std;

General::General()
{
    this->nombreConservatorio = " ";
    this->instrumentosIngresados = 0;
}

General::General(string nombre)
{
    this->nombreConservatorio = nombre;
    this->instrumentosIngresados = 0;
}

void General::ingresarInstrumentos()
{
    string nombre;
    string material;
    float costo;

    cout<<"Ingrese el nombre del instrumento: \n";
    cin>>nombre;
    cout<<"Ingrese el material del instrumento: \n";
    cin>>material;
    cout<<"Ingrese el precio del instrumento: \n";
    cin>>costo;

    int indice=this->instrumentosIngresados;

    this->instrumentos[indice]=Instrumento(nombre,material,costo);

    //Incrementar el numero de Instrumentos
    this->instrumentosIngresados++;

}

void General::listarInstrumentos()
{
    cout<<"\n LISTA DE INSTRUMENTOS " <<endl;
    cout<<"Total de instrumentos ingresados: "<<this->instrumentosIngresados<<endl;
    //Lazo for
    for(int i=0; i<instrumentosIngresados; i++){
        cout << this->instrumentos->obtenerDatos();
        cout<<"--------------------"<<endl;
}
   }



