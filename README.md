**🍦 Resumen del Proyecto: IceCream++**

IceCream++ es un programa interactivo que permite al usuario crear su propio helado personalizado, combinando sabores, bases y toppings, y obteniendo un resumen final junto con su ticket. El objetivo es simular el proceso de creación de un helado real, permitiendo que el usuario experimente con distintas combinaciones de ingredientes.

Al iniciar, el usuario podrá seleccionar entre cuatro tipos de helados base:

Chocolate

Café

Frutos rojos

Limón

Cada uno de estos sabores cuenta con características propias, como tipo de chocolate, intensidad del café, tipo de fruta o ralladura de limón.

**🍨 Opciones disponibles para personalizar el helado**

Elegir la base del helado
El usuario selecciona el sabor principal y su tipo o característica específica según la clase heredada.

Escoger toppings
Los toppings disponibles incluyen:

Chamoy

Chile en polvo

Nutella

Cajeta
Cada uno puede activarse o desactivarse libremente.

Calcular el precio total
El helado cuenta con un precio base que se incrementa dependiendo de cuántos toppings se agreguen.
El sistema usa la clase Toppings para determinar cuántos extras se eligieron y calcular el precio final.

Generar un ticket
Al finalizar la personalización, el programa genera un ticket completo con:

Tipo de helado

Base seleccionada

Toppings agregados

Precio final

Resumen de todas las acciones realizadas

¡Crea el helado perfecto y disfruta de tu combinación! 🍦✨

**Instrucciones de compilación**
Consideraciones: 
El programa corre en consola y está hecho con C++ standard por lo que es compatible con todos los sistemas operativos.

Opción 1: Usando script de PowerShell (Windows - Recomendado)
.\compile.ps1
.\helados.exe


Opción 2: Compilación manual por pasos
Windows:
g++ -c Toppings.cpp Helado.cpp Chocolate.cpp Cafe.cpp FrutosRojos.cpp Limon.cpp Pedido.cpp main.cpp
g++ Toppings.o Helado.o Chocolate.o Cafe.o FrutosRojos.o Limon.o Pedido.o main.o -o helados.exe
.\helados.exe

Linux/Mac:
g++ -c Toppings.cpp Helado.cpp Chocolate.cpp Cafe.cpp FrutosRojos.cpp Limon.cpp Pedido.cpp main.cpp
g++ Toppings.o Helado.o Chocolate.o Cafe.o FrutosRojos.o Limon.o Pedido.o main.o -o helados
./helados

Opción 3: Compilación en una línea
Windows:
g++ *.cpp -o helados.exe
.\helados.exe

Linux/Mac:
g++ *.cpp -o helados
./helados


Opción 4: Usando Makefile (Linux/Mac)
make
./helados
Limpiar archivos compilados

Windows:
.\clean.ps1

Linux/Mac:
make clean

O manualmente:
rm *.o helados.exe    # Windows
rm *.o helados        # Linux/Mac


Compilar con:

g++ *.cpp -o helados.exe
Correr en Windows:

.\helados.exe
Correr en Linux/Mac:

./helados

**Diagrama UML**

<img width="868" height="856" alt="uml_final_final_helado drawio" src="https://github.com/user-attachments/assets/e35657a5-72b9-4b93-8a87-70a0eb25d364" />


**Correcciones**

Volví a crear mi proyecto porque el anterior era de un centro de adopción pero estaba demasiado largo. 

Corregí los métodos de las clases de sabores de helado, la clase pedido ya que no compilaba correctamente y la clase helado. 

Se agregaron instrucciones de compilación. 

Se agregaron correcciones al uml. 
