#ifndef Limon  
#define Limon
#include "Helado.h"
#include<iostream>

using namespace std;

/*class Limon: public Helado{
	private:
	bool ralladura_limon;
		
	public:
		bool ralladura_limon();
		bool ralladura_limon();
		Limon(): Helado("ralladura de limon","Agua"){}
};*/

class Limon : public Helado {
private:
    string ralladura; // detalle propio: ralladura de limón

public:
    Limon() : Helado() {}
    Limon(string sabor, string base, Toppings top, string r)
        : Helado(sabor, base, top) {
        ralladura = r;
    }
    string get_ralladura() { return ralladura; }
    void set_ralladura(string r) { ralladura = r; }
}; 

#endif
