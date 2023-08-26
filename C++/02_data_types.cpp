/*
Tipos de datos
Bool (Boolean): Este tipo de dato es un valor logico, 
solamente tiene dos valores (verdadero o falso)
Tamaño: 4 Bytes


Numero enteros: (1, 2, 3, 4)
Tamaño: 4 Bytes


Float: Numeros de decimales (punto flotante (0.1, 4.3, 2.8, ..))
Tamaño: 4 bytes


Double: Numeros de punto flotante de doble precision
Tamaño: 8 bytes (4+4 = doble flotante)


Char (Character):
Caracter (ASCII)
Muestra el caracter o su numero en ASCII
Tamaño: 4 bytes
*/

#include<iostream>
#include <typeinfo> // Necesario para usar typeid

int main() {
    int h = true;  // Dato booleano
    int x = 5; // Dato int
    double y = 3.14; // Doble flotante
    char z = 'A'; // Char/caracter

    /*
    Imprime el tipo de dato de cada variable
    Las variables se ven en el siguiente modulo a profundidad
    */

    std::cout << "Tipo de x: " << typeid(x).name() << std::endl; 
    std::cout << "Tipo de y: " << typeid(y).name() << std::endl;
    std::cout << "Tipo de z: " << typeid(z).name() << std::endl;
    std::cout << "Tipo de h: " << typeid(h).name() << std::endl;
    return 0;
}




