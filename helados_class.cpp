#include<iostream>
#include<string>

using namespace std; 
 
class toppings; 

// CLASE PADRE: HELADO
// Representa un helado genérico con sabor, precio, base y sus toppings.

class Helado {
protected:
    string sabor;   // nombre del sabor
    int precio;     // precio (entero en esta implementación)
    string base;    // tipo de base (ej. "Leche", "N/A", etc.)

public:
    // Guardamos los toppings dentro del objeto Helado para poder
    // recuperar esa información cuando guardamos el helado en Pedido.
    Toppings misToppings;

    // Constructor por defecto necesario para arreglos estáticos
    Helado() : sabor("Sin Sabor"), precio(0), base("N/A") {}

    // Constructor que recibe sabor, base y toppings
    Helado(string _sabor, string _base, Toppings _toppings) {
        sabor = _sabor;
        base = _base;
        misToppings = _toppings; // copia de los toppings
        precio = 25; 
    }

    // Getters y setters 
    string get_Base() { return base; }
    void set_base(string _base) { base = _base; }

    string get_Sabor() { return sabor; }
    void set_Sabor(string _sabor) { sabor = _sabor; }

    int get_Precio() { return precio; }
    void set_Precio(int _precio) { precio = _precio; }

    // Devuelve los toppings guardados en valor: devuelve una copia
    Toppings get_Toppings() { return misToppings; }
};

#endif 
