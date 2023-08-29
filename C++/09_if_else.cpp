/*
Las estructuras de control en C++ te permiten tomar decisiones
y controlar el flujo de ejecución de tu programa.

Las estructuras condicionales permiten ejecutar diferentes
bloques de código según una condición determinada.
*/

#include <iostream>
int main(){
    int edad;
    std::cout << "¿Cual es tu edad?: " << std::endl; // Pregunta tu edad
    std::cin >> edad; // Asigna el valor de tu edad a una variable

    if (edad > 18){ // Evalua si edad es mayor que 18
        std::cout << "Eres mayor de edad"; // Si la afirmacion es cierta ejecuta este codigo
    } else if (edad == 18) {
        std::cout << "Tienes 18 años";
    } else {        // Entonces si ninguna condicion se cumple
        std::cout << "Eres menor de edad"; // Ejecuta este codigo
    }

    return 0;
}