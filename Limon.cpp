// Archivo: Limon.cpp
// Descripción: Implementación de la clase Limon

#include "Limon.h"

/*
*
* Constructor por default que inicializa un helado de limón
*
* @param
* @return Objeto Limon con sabor "Limon" y ralladura vacía
*/
Limon::Limon() : Helado() {
    sabor = "Limon";
    ralladura = "";
}

/*
*
* Obtiene el tipo de ralladura del helado de limón
*
* @param
* @return string con el tipo de ralladura
*/
string Limon::get_ralladura() { return ralladura; }

/*
*
* Establece el tipo de ralladura del helado de limón
*
* @param string r: el tipo de ralladura (limón verde, amarillo, etc.)
* @return
*/
void Limon::set_ralladura(string r) { ralladura = r; }
