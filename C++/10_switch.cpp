/*
En C++, puedes utilizar la estructura de control switch 
para tomar decisiones basadas en el valor de una expresión. 
El switch permite comparar el valor de la expresión con varios casos
y ejecutar el bloque de código correspondiente al caso que coincida.

Aquí tienes un ejemplo de cómo se utiliza:
*/

#include <iostream>

int main() {
    int opcion;

    std::cout << "Selecciona una opción (1-3): ";
    std::cin >> opcion;

    switch (opcion) {
        case 1:
            std::cout << "Elegiste la opción 1." << std::endl;
            break; // Es importante usar 'break' para salir del switch

        case 2:
            std::cout << "Elegiste la opción 2." << std::endl;
            break;

        case 3:
            std::cout << "Elegiste la opción 3." << std::endl;
            break;

        default:
            std::cout << "Opción inválida." << std::endl;
            break;
    }

    return 0;
}
