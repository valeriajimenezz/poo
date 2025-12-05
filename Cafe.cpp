// Archivo: Cafe.cpp
// Descripción: Implementación de la clase Cafe

#include "Cafe.h"

/*
*
* Constructor por default que inicializa un helado de café
*
* @param
* @return Objeto Cafe con sabor "Cafe" e intensidad vacía
*/
Cafe::Cafe() : Helado() {
    sabor = "Cafe";
    intensidad = "";
}

/*
*
* Obtiene la intensidad del café del helado
*
* @param
* @return string con la intensidad del café
*/
string Cafe::get_intensidad() { return intensidad; }

/*
*
* Establece la intensidad del café del helado
*
* @param string i: la intensidad del café (suave, medio, intenso)
* @return
*/
void Cafe::set_intensidad(string i) { intensidad = i; }
