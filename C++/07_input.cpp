/*
En C++, puedes obtener datos de entrada del usuario utilizando la función std::cin 
(input stream).
La función std::cin permite leer valores ingresados por el usuario desde la consola
 y asignarlos a variables en tu programa. Aquí tienes un ejemplo de cómo hacerlo:
*/

#include <iostream>

int main() {
    int edad;
    std::cout << "Escribe tu edad:";
    std::cin >> edad;

    std::cout << "Tu edad es:" << edad << std::endl;


    return 0;
}