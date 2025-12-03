// Archivo: Chocolate.cpp
// Descripción: Implementación de la clase Chocolate

#include "Chocolate.h"

// Constructor - Inicializar con sabor chocolate
Chocolate::Chocolate() : Helado() {
    sabor = "Chocolate";
    tipo_chocolate = "";
}

// Getters y Setters
string Chocolate::get_tipo_chocolate() { return tipo_chocolate; }
void Chocolate::set_tipo_chocolate(string tipo) { tipo_chocolate = tipo; }
