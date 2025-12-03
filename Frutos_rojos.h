#ifndef Frutos_rojos  
#define Frutos_rojos
#include "Helado.h"
#include<iostream>


/*class Frutos_rojos: public Helado{
	private:
	bool fruta;
		
	public:
		bool fruta();
		bool set_fruta();
		Cafe(): Helado("Fruta","Agua"){}
};*/

using namespace std;

class Frutos_rojos Helado {
private:
    string fruta; // atributo específico de Chocolate

public:
    // Constructor por defecto que llama al constructor por defecto de Helado
    Frutos_rojos() : Helado() {}

    // Constructor parametrizado que reutiliza el constructor de Helado
    Frutos_rojos(string sabor, string base, Toppings top, string tipo)
        : Helado(sabor, base, top) {
        fruta = f;
    }

    // Getter / Setter para el atributo propio
    string get_tipo_chocolate() { return tipo_chocolate; }
    void set_tipo_chocolate(string t) { tipo_chocolate = t; }
};
 

#endif

