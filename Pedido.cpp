// Archivo: Pedido.cpp
// Descripción: Implementación de los métodos de la clase Pedido

#include "Pedido.h"

// Constructor - Inicializar cantidad de helados en 0
Pedido::Pedido() : cantidad_helados(0) {}

// Getters y Setters
int Pedido::get_cantidad_helado() { return cantidad_helados; }

void Pedido::set_cantidad_helado(int cantidad) { cantidad_helados = cantidad; }

// Contar total de toppings en todo el pedido
int Pedido::get_toppings_helado() {
    int total = 0;
    for (int i = 0; i < cantidad_helados; i++) {
        total += toppings_helado[i].contar_toppings();
    }
    return total;
}

// Establecer toppings para un helado específico
void Pedido::set_toppings_helado(int index, Toppings t) {
    if (index >= 0 && index < 100) {
        toppings_helado[index] = t;
    }
}

// Calcular precio total sumando helados y toppings
float Pedido::get_precio_total() {
    float total = 0;
    for (int i = 0; i < cantidad_helados; i++) {
        total += precios[i];                                    // Precio del helado
        total += toppings_helado[i].contar_toppings() * 5;     // Precio de toppings ($5 c/u)
    }
    return total;
}

void Pedido::set_precio_total(float precio) {
    // No implementado - se calcula automáticamente
}

// Agregar un nuevo helado al pedido
void Pedido::agregar_helado(string sabor, float precio, Toppings toppings) {
    if (cantidad_helados < 100) {
        sabores[cantidad_helados] = sabor;
        precios[cantidad_helados] = precio;
        toppings_helado[cantidad_helados] = toppings;
        cantidad_helados++;
    }
}

// Calcular el total del pedido
float Pedido::calcular_total() {
    return get_precio_total();
}

// Generar el ticket de compra formateado
string Pedido::generar_ticket() {
    string ticket = "\n";
    
    // Encabezado del ticket
    ticket += "===============================================\n";
    ticket += "        HELADERIA LA DELICIA                  \n";
    ticket += "           TICKET DE COMPRA                   \n";
    ticket += "===============================================\n\n";
    
    // Listar cada helado del pedido
    for (int i = 0; i < cantidad_helados; i++) {
        ticket += "Helado #" + to_string(i + 1) + ": " + sabores[i] + "\n";
        ticket += "  Precio base: $" + to_string((int)precios[i]) + "\n";
        
        // Mostrar toppings si los hay
        if (toppings_helado[i].contar_toppings() > 0) {
            ticket += "  Toppings (" + to_string(toppings_helado[i].contar_toppings()) + "): ";
            ticket += toppings_helado[i].obtener_toppings() + "\n";
            ticket += "  Precio toppings: $" + to_string(toppings_helado[i].contar_toppings() * 5) + "\n";
        } else {
            ticket += "  Sin toppings\n";
        }
        
        ticket += "  Subtotal: $" + to_string((int)(precios[i] + toppings_helado[i].contar_toppings() * 5)) + "\n";
        ticket += "-----------------------------------------------\n";
    }
    
    // Total final
    ticket += "\nTOTAL A PAGAR: $" + to_string((int)calcular_total()) + "\n";
    ticket += "\n===============================================\n";
    ticket += "     Gracias por su compra!                   \n";
    ticket += "===============================================\n";
    
    return ticket;
}

// Validar que no se haya alcanzado el límite de helados
bool Pedido::validar_limite() {
    return cantidad_helados < 100;
}

// Limpiar el pedido (reiniciar a 0)
void Pedido::limpiar_pedido() {
    cantidad_helados = 0;
}
