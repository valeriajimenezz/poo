// Archivo: Limon.cpp
// Descripción: Implementación de la clase Limon

#include "Limon.h"

// Constructor - Inicializar con sabor limon
Limon::Limon() : Helado() {
    sabor = "Limon";
    ralladura = "";
}

// Getters y Setters
string Limon::get_ralladura() { return ralladura; }
void Limon::set_ralladura(string r) { ralladura = r; }
