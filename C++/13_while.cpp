/*
Un bucle while es una estructura de control de flujo en C++ 
(y en muchos otros lenguajes de programación) que se utiliza para repetir
un bloque de código mientras una condición sea verdadera. 
Es una forma de ejecutar instrucciones repetitivas basadas en una condición lógica.
*/

#include <iostream>

int main(){
    // Estructura de un while

    /*
    while (condición) {
    Código a ejecutar mientras la condición sea verdadera
    }
    */


   //Imprimir numeros de 1 al 5
    int contador = 1;

    while (contador <= 5) { // El cilo se ejecutará hasta que contador sea menor o igual a 5
        std::cout << contador << " ";
        contador++;
    }

    return 0;
}