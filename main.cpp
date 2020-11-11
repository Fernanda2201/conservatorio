#include <iostream>
#include <string>
#include "instrumento.h"
#include "percusion.h"
#include "viento.h"
#include "general.h"
#include "cuerda.h"

using namespace std;
int Instrumento::totalInstrumentos = 0;
int main()
{
    General objeto2("Conservatorio");
    //objeto2.ingresarInstrumentos();



    cout<<"************BIENVENIDO************"<<endl;
    cout<<"***CONSERVATORIO NACIONAL DE MUSICA***"<<endl;

    cout<<"Por favor seleccione una opcion"<<endl;
    int opcion = 0;
    int total= 0;
    Instrumento *objetoInst[10];

    do{

        cout<<"1.Ingresar instrumentos de viento"<<endl;
        cout<<"2.Ingresar guitarras o violines"<<endl;
        cout<<"3.Ingresar pianos"<<endl;
        cout<<"4.Ingresar instrumentos de percusion"<<endl;
        cout<<"5.Listar todos los instrumentos ingresados"<<endl;
        cout<<"6.Afinar todos los intrumentos ingresados"<<endl;
        cout<<"7.Obtener total de instrumentos ingresados"<<endl;
        cout<<"8.Calcular el costo promedio de los instrumentos ingresados"<<endl;
        cin>>opcion;

        string nombre= "";
        string material = "";
        float costo = 0;
        string clasificacion = "";

        switch(opcion){
        case 1:
        {

            cout<<"==========Ingresar Instrumentos de Viento=========="<<endl;
            cout<<"Ingrese el nombre del instrumento: \n";
            cin>>nombre;
            cout<<"Ingrese el material del instrumento: \n";
            cin>>material;
            cout<<"Ingrese el precio del instrumento: \n";
            cin>>costo;
            cout<<"Ingrese la clasificacion ";
            cout<<"\nBisel, lengueta, doble, de embocadura: "<<endl;
            cin>>clasificacion;
            objetoInst[total] = new Viento (nombre,material,costo,clasificacion);
            cout<<objetoInst[total]->obtenerDatos()<<endl;
            cout<<objetoInst[total]->afinar()<<endl;

            cout<<"                           "<<endl;
            break;
        }

        case 2:
        {

            cout<<"==========Ingresar Guitarras o Violines=========="<<endl;
            cout<<"Desea ingresar una Guitarra = G o un Violin =V"<<endl;
            char seleccion;
            cin>>seleccion;

            if(seleccion == 'G' || seleccion == 'g'){
                cout<<"********INGRESAR GUITARRAS********"<<endl;
                cout<<"Ingrese el nombre del instrumento: \n";
                cin>>nombre;
                cout<<"Ingrese el material del instrumento: \n";
                cin>>material;
                cout<<"Ingrese el precio del instrumento: \n";
                cin>>costo;
                cout<<"Electrica - No electrica\n";
                cin>>clasificacion;
                objetoInst[total] = new Guitarra(nombre,material,costo,clasificacion);
                cout<<objetoInst[total]->obtenerDatos()<<"\n";
                cout<<objetoInst[total]->afinar()<<"\n";
            }else{
                cout<<"********INGRESAR VIOLINES********"<<endl;
                cout<<"Ingrese el nombre del instrumento: \n";
                cin>>nombre;
                cout<<"Ingrese el material del instrumento: \n";
                cin>>material;
                cout<<"Ingrese el precio del instrumento: \n";
                cin>>costo;
                cout<<"Electrica - No electrica\n";
                cin>>clasificacion;
                objetoInst[total] = new Violin(nombre,material,costo,clasificacion);
                cout<<objetoInst[total]->obtenerDatos()<<"\n";
                cout<<objetoInst[total]->afinar()<<"\n";
            }

            break;
        }
        case 3:
        {
            cout<<"==========Ingresar Pianos=========="<<endl;
            cout<<"Ingrese el nombre del instrumento: \n";
            cin>>nombre;
            cout<<"Ingrese el material del instrumento: \n";
            cin>>material;
            cout<<"Ingrese el precio del instrumento: \n";
            cin>>costo;
            cout<<"Vertical - Cola\n";
            cin>>clasificacion;
            objetoInst[total] = new Piano(nombre,material,costo,clasificacion);
            cout<<objetoInst[total]->obtenerDatos()<<"\n";
            cout<<objetoInst[total]->afinar()<<"\n";

            break;
        }
        case 4:{

            cout<<"==========Ingresar Instrumentos de Percusion=========="<<endl;
            cout<<"Ingrese el nombre del instrumento: \n";
            cin>>nombre;
            cout<<"Ingrese el material del instrumento: \n";
            cin>>material;
            cout<<"Ingrese el precio del instrumento: \n";
            cin>>costo;
            cout<<"Ingrese la altura (determinada o indeterminada): ";
            cin>>clasificacion;

            objetoInst[total] = new Percusion(nombre,material,costo,clasificacion);
            cout<<objetoInst[total]->obtenerDatos()<<"\n";
            cout<<objetoInst[total]->afinar()<<"\n";
            break;


        }
        case 5:{
            cout<<"==========Listar instrumentos=========="<<endl;

            objetoInst[total] = new General();
            //cout<<objetoInst[total]->listarInstrumentos();
            for(int i=0; i<total; i++){
                if(objetoInst[i]){
                    cout<<objetoInst[i]->obtenerDatos();
                   }
                }
            break;
            }

        case 6:
                {
                    cout<<"*******Afinar todos los instrumentos ingresados*******"<<endl;

                    break;
                }
                case 7:{

                    cout << "\nTotal de instrumentos ingresados: " <<Instrumento::totalInstrumentos<<"\n" << endl;
                }
                    break;
                case 8:
                {
                    cout<<"----------Costo de los instrumentos----------\n";

                }

            }
        }while(opcion != 9);
            return 0;
        }

