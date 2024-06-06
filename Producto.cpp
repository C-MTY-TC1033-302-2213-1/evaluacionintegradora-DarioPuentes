#include "Producto.h"

//Constructores
Producto::Producto(){
    nombre = "Dario Puentes Diaz";
    precio = 838287;
    peso = 19;
}

Producto::Producto(string _nombre, int _precio, int _peso){
    nombre = _nombre;
    precio = _precio;
    peso = _peso;
}

//Modificadores
void Producto::setNombre(string _nombre){
    nombre = _nombre;
}

void Producto::setPrecio(int _precio){
    precio = _precio;
}

void Producto::setPeso(int _peso){
    peso = _peso;
}

//De acceso
string Producto::getNombre(){
    return nombre;
}

int Producto::getPrecio(){
    return precio;
}

int Producto::getPeso(){
    return peso;
}

//Otros
string Producto::str(){
    return nombre + "-$" + to_string(precio) + "-" + to_string(peso) + "_$" + to_string(calculaTotalPagar());
}

int Producto::calculaTotalPagar(){
    return precio * peso;
}