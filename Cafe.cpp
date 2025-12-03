// Archivo: Cafe.cpp
// Descripción: Implementación de la clase Cafe

#include "Cafe.h"

// Constructor - Inicializar con sabor cafe
Cafe::Cafe() : Helado() {
    sabor = "Cafe";
    intensidad = "";
}

// Getters y Setters
string Cafe::get_intensidad() { return intensidad; }
void Cafe::set_intensidad(string i) { intensidad = i; }
