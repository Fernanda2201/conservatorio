#ifndef INSTRUMENTO_H
#define INSTRUMENTO_H
#include <string>

using namespace std;

class Instrumento
{
private:
    int id;
    string nombre;
    string material;
    float costo;
protected:
    string tipo;
public:
    Instrumento();
    Instrumento(string nombre, string material, float costo);

    //Metodo para afinar todos los instrumentos
    virtual string afinar();

    //Metodo para obtener informacion
    virtual string obtenerDatos();


    string getNombre();
    string getCosto();



    int getId() const;
    void setId(int value);
    static int totalInstrumentos; //Variable Estatica que lleva la cuenta de
                              //los instrumentos creados
};

#endif // INSTRUMENTO_H
