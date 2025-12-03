// Archivo: Helado.cpp
// Descripción: Implementación de los métodos de la clase base Helado

#include "Helado.h"

// Constructor por defecto - Inicializar atributos
Helado::Helado() : sabor(""), precio(25), base("") {}

// Constructor con parámetros
Helado::Helado(string sabor, string base, Toppings toppings) 
    : sabor(sabor), precio(25), base(base) {}

// Destructor
Helado::~Helado() {}

// Getters y Setters
string Helado::get_Base() { return base; }
void Helado::set_base(string b) { base = b; }
string Helado::get_Sabor() { return sabor; }
void Helado::set_Sabor(string s) { sabor = s; }
int Helado::getPrecio() { return precio; }
