// Archivo: Toppings.cpp
// Descripción: Implementación de los métodos de la clase Toppings

#include "Toppings.h"

/*
*
* Constructor por default que inicializa todos los toppings en false
*
* @param
* @return Objeto Toppings con todos los valores en false
*/
Toppings::Toppings() : chamoy(false), chile_polvo(false), nutella(false), cajeta(false) {}

/*
*
* Establece el valor del topping chamoy
*
* @param bool valor: true si se desea agregar chamoy, false en caso contrario
* @return
*/
void Toppings::set_chamoy(bool valor) { chamoy = valor; }

/*
*
* Establece el valor del topping chile en polvo
*
* @param bool valor: true si se desea agregar chile en polvo, false en caso contrario
* @return
*/
void Toppings::set_chile_polvo(bool valor) { chile_polvo = valor; }

/*
*
* Establece el valor del topping nutella
*
* @param bool valor: true si se desea agregar nutella, false en caso contrario
* @return
*/
void Toppings::set_nutella(bool valor) { nutella = valor; }

/*
*
* Establece el valor del topping cajeta
*
* @param bool valor: true si se desea agregar cajeta, false en caso contrario
* @return
*/
void Toppings::set_cajeta(bool valor) { cajeta = valor; }

/*
*
* Cuenta cuántos toppings están seleccionados (tienen valor true)
*
* @param
* @return int con el número total de toppings seleccionados
*/
int Toppings::contar_toppings() {
    int count = 0;
    if (chamoy) count++;
    if (chile_polvo) count++;
    if (nutella) count++;
    if (cajeta) count++;
    return count;
}

/*
*
* Genera una cadena de texto con los nombres de los toppings seleccionados
*
* @param
* @return string con los nombres de los toppings separados por comas
*/
string Toppings::obtener_toppings() {
    string resultado = "";
    
    // Agregar cada topping seleccionado
    if (chamoy) resultado += "Chamoy, ";
    if (chile_polvo) resultado += "Chile en polvo, ";
    if (nutella) resultado += "Nutella, ";
    if (cajeta) resultado += "Cajeta, ";
    
    // Quitar la última coma o mostrar mensaje si no hay toppings
    if (resultado.length() > 0) {
        resultado = resultado.substr(0, resultado.length() - 2);
    } else {
        resultado = "Sin toppings";
    }
    return resultado;
}
