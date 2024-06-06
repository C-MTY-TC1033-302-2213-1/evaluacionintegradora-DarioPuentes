#include "Combo.h"

//Constructores
Combo::Combo() : Producto(){
    clave = 0;
}

Combo::Combo(string _nombre, int _precio, int _peso, int _clave) : Producto(_nombre, _precio, _peso){
    clave = _clave;
}

//Otros
string Combo::str(){
    return nombre + "-$" + to_string(precio) + "-" + to_string(peso) + "-$" + to_string(calculaTotalPagar()) + "-" + to_string(clave);
}

int Combo::calculaTotalPagar(){
    int descuento, TotalPagar;
    if (clave == 1){
        TotalPagar = precio * peso * clave;
        descuento = (TotalPagar/100) * 25;
        return TotalPagar - descuento;
    }
    if (clave == 2){
        TotalPagar = precio * peso * clave;
        descuento = (TotalPagar/100) * 30;
        return TotalPagar - descuento;
    }
    else {
        return precio * peso * clave;
    }
}