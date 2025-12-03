// Archivo: Pedido.h
// Descripción: Definición de la clase Pedido para gestionar todo el pedido de helados

#ifndef PEDIDO_H
#define PEDIDO_H

#include <string>
#include "Toppings.h"
using namespace std;

// Definir clase Pedido
class Pedido {
private:
    // Atributos privados - Arrays para almacenar hasta 100 helados
    string sabores[100];
    float precios[100];
    Toppings toppings_helado[100];
    int cantidad_helados;

public:
    // Constructor
    Pedido();
    
    // Getters y Setters
    int get_cantidad_helado();
    void set_cantidad_helado(int cantidad);
    int get_toppings_helado();                    // Contar total de toppings en el pedido
    void set_toppings_helado(int index, Toppings t);
    float get_precio_total();
    void set_precio_total(float precio);
    
    // Métodos principales
    void agregar_helado(string sabor, float precio, Toppings toppings);  // Agregar helado al pedido
    float calcular_total();                       // Calcular precio total
    string generar_ticket();                      // Generar ticket de compra
    bool validar_limite();                        // Validar que no se exceda el límite
    void limpiar_pedido();                        // Limpiar el pedido
};

#endif
