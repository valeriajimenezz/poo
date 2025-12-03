// Archivo: Chocolate.h
// Descripción: Definición de la clase Chocolate que hereda de Helado

#ifndef CHOCOLATE_H
#define CHOCOLATE_H

#include "Helado.h"

// Clase Chocolate - Hereda de Helado
class Chocolate : public Helado {
private:
    // Atributo específico de Chocolate
    string tipo_chocolate;

public:
    // Constructor
    Chocolate();
    
    // Getters y Setters específicos
    string get_tipo_chocolate();
    void set_tipo_chocolate(string tipo);
};

#endif
