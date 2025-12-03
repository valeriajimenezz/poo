#ifndef Cafe  
#define Cafe
#include "Helado.h"
#include<iostream>

using namespace std;

class Cafe: public Helado{
	private:
	bool granos_cafe;
		
	public:
		bool get_granos_cafe();
		bool set_ganos_cafe();
		Cafe(): Helado("Granos_cafe","Leche"){}
}; 

#endif
