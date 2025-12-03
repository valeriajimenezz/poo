// Archivo: Toppings.h
// Descripción: Definición de la clase Toppings para manejar los ingredientes adicionales

#ifndef TOPPINGS_H
#define TOPPINGS_H

#include <string>
using namespace std;

// Definir clase Toppings
class Toppings {
private:
    // Atributos privados - Estados de cada topping
    bool chamoy;
    bool chile_polvo;
    bool nutella;
    bool cajeta;

public:
    // Constructor
    Toppings();
    
    // Setters - Configurar cada topping
    void set_chamoy(bool valor);
    void set_chile_polvo(bool valor);
    void set_nutella(bool valor);
    void set_cajeta(bool valor);
    
    // Métodos auxiliares
    int contar_toppings();        // Contar cuántos toppings están seleccionados
    string obtener_toppings();    // Obtener lista de toppings en formato texto
};

#endif
