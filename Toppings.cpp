// Archivo: Toppings.cpp
// Descripción: Implementación de los métodos de la clase Toppings

#include "Toppings.h"

// Constructor - Inicializar todos los toppings en false
Toppings::Toppings() : chamoy(false), chile_polvo(false), nutella(false), cajeta(false) {}

// Setters - Establecer el valor de cada topping
void Toppings::set_chamoy(bool valor) { chamoy = valor; }
void Toppings::set_chile_polvo(bool valor) { chile_polvo = valor; }
void Toppings::set_nutella(bool valor) { nutella = valor; }
void Toppings::set_cajeta(bool valor) { cajeta = valor; }

// Contar cuántos toppings están seleccionados
int Toppings::contar_toppings() {
    int count = 0;
    if (chamoy) count++;
    if (chile_polvo) count++;
    if (nutella) count++;
    if (cajeta) count++;
    return count;
}

// Generar string con los nombres de los toppings seleccionados
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
