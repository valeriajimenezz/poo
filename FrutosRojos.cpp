// Archivo: FrutosRojos.cpp
// Descripción: Implementación de la clase FrutosRojos

#include "FrutosRojos.h"

/*
*
* Constructor por default que inicializa un helado de frutos rojos
*
* @param
* @return Objeto FrutosRojos con sabor "Frutos Rojos" y fruta vacía
*/
FrutosRojos::FrutosRojos() : Helado() {
    sabor = "Frutos Rojos";
    fruta = "";
}

/*
*
* Obtiene el tipo de fruta principal del helado
*
* @param
* @return string con el nombre de la fruta principal
*/
string FrutosRojos::get_fruta() { return fruta; }

/*
*
* Establece el tipo de fruta principal del helado
*
* @param string f: el nombre de la fruta (fresa, frambuesa, zarzamora, etc.)
* @return
*/
void FrutosRojos::set_fruta(string f) { fruta = f; }
