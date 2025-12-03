// Archivo: Limon.h
// Descripción: Definición de la clase Limon que hereda de Helado

#ifndef LIMON_H
#define LIMON_H

#include "Helado.h"

// Clase Limon - Hereda de Helado
class Limon : public Helado {
private:
    // Atributo específico de Limon
    string ralladura;

public:
    // Constructor
    Limon();
    
    // Getters y Setters específicos
    string get_ralladura();
    void set_ralladura(string r);
};

#endif
