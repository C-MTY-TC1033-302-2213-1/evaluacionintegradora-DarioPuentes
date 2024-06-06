#ifndef Producto_h
#define Producto_h

#include <stdio.h>
#include <string>
#include <iostream>
#include <sstream>
#include <fstream>

using namespace std;

class Producto {
protected:
    string nombre;
    int precio;
    int peso;

public:
    //Constructores
    Producto();
    Producto(string _nombre, int _precio, int _peso);

    //Modificadores
    void setNombre(string _nombre);
    void setPrecio(int _precio);
    void setPeso(int _peso);

    //De acceso
    string getNombre();
    int getPrecio();
    int getPeso();

    //Otros
    virtual string str();
    virtual int calculaTotalPagar();
};

#endif
