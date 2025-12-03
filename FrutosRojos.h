// Archivo: FrutosRojos.h
// Descripción: Definición de la clase FrutosRojos que hereda de Helado

#ifndef FRUTOSROJOS_H
#define FRUTOSROJOS_H

#include "Helado.h"

// Clase FrutosRojos - Hereda de Helado
class FrutosRojos : public Helado {
private:
    // Atributo específico de FrutosRojos
    string fruta;

public:
    // Constructor
    FrutosRojos();
    
    // Getters y Setters específicos
    string get_fruta();
    void set_fruta(string f);
};

#endif
