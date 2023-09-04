/*
El bucle do while en C++ es otra estructura de control de flujo que se utiliza
para repetir un bloque de código mientras una condición sea verdadera,
al igual que el bucle while común. La diferencia principal entre ellos radica
en cuándo se verifica la condición: en un bucle do while, la condición se verifica
después de ejecutar el bloque de código, lo que significa que el bloque se ejecutará
al menos una vez, incluso si la condición es inicialmente falsa.
*/

#include <iostream>

int main() {
    int numero;
    
    do {
        std::cout << "Ingrese un número positivo: ";
        std::cin >> numero;
    } while (numero <= 0);
    
    std::cout << "Has ingresado un número positivo: " << numero << std::endl;
    
    return 0;
}

/*
Un ejemplo simple de uso de un bucle do while podría ser la validación de una entrada
del usuario para asegurarse de que se ingrese un número positivo
*/