// Archivo: FrutosRojos.cpp
// Descripción: Implementación de la clase FrutosRojos

#include "FrutosRojos.h"

// Constructor - Inicializar con sabor frutos rojos
FrutosRojos::FrutosRojos() : Helado() {
    sabor = "Frutos Rojos";
    fruta = "";
}

// Getters y Setters
string FrutosRojos::get_fruta() { return fruta; }
void FrutosRojos::set_fruta(string f) { fruta = f; }
