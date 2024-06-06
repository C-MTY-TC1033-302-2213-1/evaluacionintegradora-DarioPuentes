#ifndef Verdura_h
#define Verdura_h

#include <stdio.h>
#include <string>
#include <iostream>
#include <sstream>
#include <fstream>
#include "Producto.h"

using namespace std;

class Verdura : public Producto {
private:
    string temporada;

public: 
    //Constructores
    Verdura();
    Verdura(string _nombre, int _precio, int _peso, string _temporada);

    //Otros
    string str();
    int calculaTotalPagar();
};

#endif