// Archivo: Pedido.cpp
// Descripción: Implementación de los métodos de la clase Pedido

#include "Pedido.h"

/*
*
* Constructor por default que inicializa el pedido vacío
*
* @param
* @return Objeto Pedido con cantidad de helados en 0
*/
Pedido::Pedido() : cantidad_helados(0) {}

/*
*
* Obtiene la cantidad de helados en el pedido
*
* @param
* @return int con la cantidad de helados ordenados
*/
int Pedido::get_cantidad_helado() { return cantidad_helados; }

/*
*
* Establece la cantidad de helados en el pedido
*
* @param int cantidad: el nuevo número de helados
* @return
*/
void Pedido::set_cantidad_helado(int cantidad) { cantidad_helados = cantidad; }

/*
*
* Cuenta el total de toppings agregados en todo el pedido
*
* @param
* @return int con el número total de toppings en todos los helados
*/
int Pedido::get_toppings_helado() {
    int total = 0;
    for (int i = 0; i < cantidad_helados; i++) {
        total += toppings_helado[i].contar_toppings();
    }
    return total;
}

/*
*
* Establece los toppings para un helado específico del pedido
*
* @param int index: el índice del helado en el pedido, Toppings t: el objeto Toppings a asignar
* @return
*/
void Pedido::set_toppings_helado(int index, Toppings t) {
    if (index >= 0 && index < 100) {
        toppings_helado[index] = t;
    }
}

/*
*
* Calcula el precio total del pedido sumando helados y toppings
*
* @param
* @return float con el precio total (helados + toppings)
*/
float Pedido::get_precio_total() {
    float total = 0;
    for (int i = 0; i < cantidad_helados; i++) {
        total += precios[i];                                    // Precio del helado
        total += toppings_helado[i].contar_toppings() * 5;     // Precio de toppings ($5 c/u)
    }
    return total;
}

/*
*
* Setter para precio total (no implementado, se calcula automáticamente)
*
* @param float precio: precio a establecer (no utilizado)
* @return
*/
void Pedido::set_precio_total(float precio) {
    // No implementado - se calcula automáticamente
}

/*
*
* Agrega un nuevo helado al pedido con sus toppings
*
* @param string sabor: el sabor del helado, float precio: el precio del helado, Toppings toppings: los toppings del helado
* @return
*/
void Pedido::agregar_helado(string sabor, float precio, Toppings toppings) {
    if (cantidad_helados < 100) {
        sabores[cantidad_helados] = sabor;
        precios[cantidad_helados] = precio;
        toppings_helado[cantidad_helados] = toppings;
        cantidad_helados++;
    }
}

/*
*
* Calcula el total del pedido
*
* @param
* @return float con el precio total a pagar
*/
float Pedido::calcular_total() {
    return get_precio_total();
}

/*
*
* Genera el ticket de compra con formato detallado
*
* @param
* @return string con el ticket formateado incluyendo desglose de precios
*/
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

/*
*
* Valida que no se haya alcanzado el límite de 100 helados
*
* @param
* @return bool true si aún se pueden agregar helados, false si se alcanzó el límite
*/
bool Pedido::validar_limite() {
    return cantidad_helados < 100;
}

/*
*
* Limpia el pedido reiniciando la cantidad de helados a 0
*
* @param
* @return
*/
void Pedido::limpiar_pedido() {
    cantidad_helados = 0;
}
