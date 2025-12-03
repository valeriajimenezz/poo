// Archivo: main.cpp
// Descripción: Programa principal - Interfaz interactiva para pedidos de helados

#include <iostream>
#include "Pedido.h"
#include "Chocolate.h"
#include "Cafe.h"
#include "FrutosRojos.h"
#include "Limon.h"
using namespace std;

// Función para mostrar menú de sabores
void mostrarSabores() {
    cout << "\n===============================================\n";
    cout << "          SABORES DISPONIBLES                 \n";
    cout << "===============================================\n";
    cout << "  1. Chocolate\n";
    cout << "  2. Cafe\n";
    cout << "  3. Frutos Rojos\n";
    cout << "  4. Limon\n";
    cout << "  Precio: $25 por helado\n";
}

// Función para mostrar menú de toppings
void mostrarToppings() {
    cout << "\n===============================================\n";
    cout << "         TOPPINGS DISPONIBLES                 \n";
    cout << "===============================================\n";
    cout << "  1. Chamoy\n";
    cout << "  2. Chile en polvo\n";
    cout << "  3. Nutella\n";
    cout << "  4. Cajeta\n";
    cout << "  Precio: $5 por topping\n";
}

// Función para seleccionar toppings de forma interactiva
Toppings seleccionarToppings() {
    Toppings t;
    char respuesta;
    
    // Preguntar por cada topping
    cout << "\n¿Desea agregar Chamoy? (s/n): ";
    cin >> respuesta;
    if (respuesta == 's' || respuesta == 'S') t.set_chamoy(true);
    
    cout << "¿Desea agregar Chile en polvo? (s/n): ";
    cin >> respuesta;
    if (respuesta == 's' || respuesta == 'S') t.set_chile_polvo(true);
    
    cout << "¿Desea agregar Nutella? (s/n): ";
    cin >> respuesta;
    if (respuesta == 's' || respuesta == 'S') t.set_nutella(true);
    
    cout << "¿Desea agregar Cajeta? (s/n): ";
    cin >> respuesta;
    if (respuesta == 's' || respuesta == 'S') t.set_cajeta(true);
    
    return t;
}

// Función principal
int main() {
    // Crear objeto pedido
    Pedido pedido;
    int opcion;
    bool continuar = true;
    
    // Mensaje de bienvenida
    cout << "\n===============================================\n";
    cout << "   Bienvenido a HELADERIA LA DELICIA          \n";
    cout << "===============================================\n";
    
    // Bucle principal - Permitir múltiples helados
    while (continuar) {
        // Mostrar menú de sabores
        mostrarSabores();
        
        cout << "\nSeleccione el sabor de helado (1-4): ";
        cin >> opcion;
        
        string sabor;
        Helado* helado = nullptr;
        
        // Crear objeto según la selección del usuario
        switch (opcion) {
            case 1: {
                Chocolate* choco = new Chocolate();
                sabor = "Chocolate";
                helado = choco;
                break;
            }
            case 2: {
                Cafe* cafe = new Cafe();
                sabor = "Cafe";
                helado = cafe;
                break;
            }
            case 3: {
                FrutosRojos* frutos = new FrutosRojos();
                sabor = "Frutos Rojos";
                helado = frutos;
                break;
            }
            case 4: {
                Limon* limon = new Limon();
                sabor = "Limon";
                helado = limon;
                break;
            }
            default:
                cout << "Opcion invalida. Intente de nuevo.\n";
                continue;
        }
        
        // Preguntar si desea agregar toppings
        mostrarToppings();
        cout << "\n¿Desea agregar toppings? (s/n): ";
        char resp;
        cin >> resp;
        
        Toppings toppings;
        if (resp == 's' || resp == 'S') {
            toppings = seleccionarToppings();
        }
        
        // Agregar helado al pedido
        pedido.agregar_helado(sabor, 25, toppings);
        
        // Liberar memoria del objeto helado
        delete helado;
        
        // Preguntar si desea ordenar otro helado
        cout << "\n¿Desea ordenar otro helado? (s/n): ";
        cin >> resp;
        if (resp != 's' && resp != 'S') {
            continuar = false;
        }
    }
    
    // Generar y mostrar el ticket final
    cout << pedido.generar_ticket();
    
    return 0;
}
