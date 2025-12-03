#ifndef Cafe  
#define Cafe
#include "Helado.h"
#include<iostream>

using namespace std;

/*class Cafe: public Helado{
	private:
	bool granos_cafe;
		
	public:
		bool get_granos_cafe();
		bool set_ganos_cafe();
		Cafe(): Helado("Granos_cafe","Leche"){}
};*/

class Cafe : public Helado {
private:
    string intensidad; // atributo específico: intensidad del café

public:
    Cafe() : Helado() {}
    Cafe(string sabor, string base, Toppings top, string inte)
        : Helado(sabor, base, top) {
        intensidad = inte;
    }
    string get_intensidad() { return intensidad; }
    void set_intensidad(string i) { intensidad = i; }
}; 

#endif

