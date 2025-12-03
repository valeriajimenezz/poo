#ifndef Chocolate  
#define Chocolate 
#include "Helado.h"
#include<iostream>

using namespace std;

class Chocolate : public Helado {
private:
    string tipo_chocolate; // atributo específico de Chocolate

public:
    // Constructor por defecto que llama al constructor por defecto de Helado
    Chocolate() : Helado() {}

    // Constructor parametrizado que reutiliza el constructor de Helado
    Chocolate(string sabor, string base, Toppings top, string tipo)
        : Helado(sabor, base, top) {
        tipo_chocolate = tipo;
    }

    // Getter / Setter para el atributo propio
    string get_tipo_chocolate() { return tipo_chocolate; }
    void set_tipo_chocolate(string t) { tipo_chocolate = t; }
};


#endif
