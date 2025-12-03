#ifndef"TOPPINGS_H"
#def"TOPPINGS_H"

#include<string>
#include<iostream>

using namespace std;

/* CLASE TOPPINGS
 Representa los toppings (ingredientes extra) que puede llevar
 un helado. Cada topping es un bool que indica si está presente.*/
 
class Toppings{
	bool chamoy;
    bool chile_polvo;
    bool nutella;
    bool cajeta;
    
    public: 
    // Constructor por defecto: inicializa todos los toppings en false. 
    
    Toppings() : 
	 chamoy(false),
	 chile_polvo(false), 
	 nutella(false), 
	 cajeta(false) {}

    // Setters para activar y desactivar cada topping 
    
    void set_chamoy(bool b) { chamoy = b; }
    void set_chile_polvo(bool b) { chile_polvo = b; }
    void set_nutella(bool b) { nutella = b; }
    void set_cajeta(bool b) { cajeta = b; }
    
    // Método para contar cuántos toppings están activos
    int contra_toppings(){
    	int contador = 0;
    	if (camoy) contador++;
    	if(chile_polvo) contador++;
		if (nutella) contador++; 
		if (cajeta) contador++;
		
		return contador; 
    }
    // Genera un string de los toppings seleccionados, separados por comas. 
    string toString() {
        string s = "";
        if (chamoy) s += "Chamoy, ";
        if (chile_polvo) s += "Chile, ";
        if (nutella) s += "Nutella, ";
        if (cajeta) s += "Cajeta, ";
        if (s.length() > 0) s = s.substr(0, s.length() - 2);
        return s;
    }
};	
	
