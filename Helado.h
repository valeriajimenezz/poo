// Archivo: Helado.h
// Descripción: Definición de la clase base Helado

#ifndef HELADO_H
#define HELADO_H

#include <string>
#include "Toppings.h"
using namespace std;

// Definir clase base Helado
class Helado {
protected:
    // Atributos protegidos - Accesibles por clases derivadas
    string sabor;
    int precio;
    string base;

public:
    // Constructores
    Helado();
    Helado(string sabor, string base, Toppings toppings);
    
    // Destructor virtual para herencia
    virtual ~Helado();
    
    // Getters y Setters
    string get_Base();
    void set_base(string b);
    string get_Sabor();
    void set_Sabor(string s);
    int getPrecio();
};

#endif
