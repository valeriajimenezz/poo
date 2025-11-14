#using <iostream>
#include <string>
using namespace std;

class Mascota {
public:
    strng nombre;
    string raza;
    float edad; 
public:
    Mascota(string _nombre, string _especie, int _edad, string _raza)
        : nombre(_nombre), especie(_especie), edad(_edad), raza(_raza) {}

    void mostrarInfo() const {
        cout << "Mascota: " << nombre << " (" << especie 
             << "), Edad: " << edad << ", Raza: " << raza << endl;
    }
};
