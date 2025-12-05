// Archivo: Chocolate.cpp
// Descripción: Implementación de la clase Chocolate

#include "Chocolate.h"

/*
*
* Constructor por default que inicializa un helado de chocolate
*
* @param
* @return Objeto Chocolate con sabor "Chocolate" y tipo vacío
*/
Chocolate::Chocolate() : Helado() {
    sabor = "Chocolate";
    tipo_chocolate = "";
}

/*
*
* Obtiene el tipo de chocolate del helado
*
* @param
* @return string con el tipo de chocolate
*/
string Chocolate::get_tipo_chocolate() { return tipo_chocolate; }

/*
*
* Establece el tipo de chocolate del helado
*
* @param string tipo: el tipo de chocolate (amargo, semi-amargo, etc.)
* @return
*/
void Chocolate::set_tipo_chocolate(string tipo) { tipo_chocolate = tipo; }
