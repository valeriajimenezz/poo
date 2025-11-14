#include <iostream>
using namespace std;

class Adoptante {
private:
    string nombre;
    int edad;
    string telefono;

public:
    Adoptante(string _nombre, int _edad, string _telefono)
        : nombre(_nombre), edad(_edad), telefono(_telefono) {}

    void mostrarInfo() const {
        cout << "Adoptante: " << nombre << ", Edad: " << edad 
             << ", Teléfono: " << telefono << endl;
    }
};


