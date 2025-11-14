#include <iostream>
#include "Mascota.h"
#include "Adoptante.h"
using namespace std;

class Adopcion {
private:
    Mascota mascota;
    Adoptante adoptante;
    string fecha;

public:
    Adopcion(Mascota _mascota, Adoptante _adoptante, string _fecha)
        : mascota(_mascota), adoptante(_adoptante), fecha(_fecha) {}

    void mostrarInfo() const {
        cout << "Solicitud de Adopción" << endl;
        mascota.mostrarInfo();
        adoptante.mostrarInfo();
        cout << "Fecha: " << fecha << endl;
    }
};


