// Archivo: Helado.cpp
// Descripción: Implementación de los métodos de la clase base Helado

#include "Helado.h"

/*
*
* Constructor por default que inicializa los atributos del helado
*
* @param
* @return Objeto Helado con sabor vacío, precio en 25 y base vacía
*/
Helado::Helado() : sabor(""), precio(25), base("") {}

/*
*
* Constructor que recibe valores para crear un helado personalizado
*
* @param string sabor: el sabor del helado, string base: el tipo de base del helado, Toppings toppings: los toppings del helado
* @return Objeto Helado con los valores especificados
*/
Helado::Helado(string sabor, string base, Toppings toppings) 
    : sabor(sabor), precio(25), base(base) {}

/*
*
* Destructor de la clase Helado
*
* @param
* @return
*/
Helado::~Helado() {}

/*
*
* Obtiene el tipo de base del helado
*
* @param
* @return string con el tipo de base
*/
string Helado::get_Base() { return base; }

/*
*
* Establece el tipo de base del helado
*
* @param string b: el nuevo tipo de base
* @return
*/
void Helado::set_base(string b) { base = b; }

/*
*
* Obtiene el sabor del helado
*
* @param
* @return string con el sabor del helado
*/
string Helado::get_Sabor() { return sabor; }

/*
*
* Establece el sabor del helado
*
* @param string s: el nuevo sabor del helado
* @return
*/
void Helado::set_Sabor(string s) { sabor = s; }

/*
*
* Obtiene el precio del helado
*
* @param
* @return int con el precio del helado (siempre 25)
*/
int Helado::getPrecio() { return precio; }
