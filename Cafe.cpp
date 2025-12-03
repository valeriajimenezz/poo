#include "Cafe.h"

Cafe::Cafe() : Helado() {
    sabor = "Cafe";
    intensidad = "";
}

string Cafe::get_intensidad() { return intensidad; }
void Cafe::set_intensidad(string i) { intensidad = i; }
