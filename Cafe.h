// Archivo: Cafe.h
// Descripción: Definición de la clase Cafe que hereda de Helado

#ifndef CAFE_H
#define CAFE_H

#include "Helado.h"

// Clase Cafe - Hereda de Helado
class Cafe : public Helado {
private:
    // Atributo específico de Cafe
    string intensidad;

public:
    // Constructor
    Cafe();
    
    // Getters y Setters específicos
    string get_intensidad();
    void set_intensidad(string i);
};

#endif
