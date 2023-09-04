/*
xEl ciclo for en C++ (y en muchos otros lenguajes de programación) 
se utiliza para repetir un bloque de código un número específico de veces
o para iterar sobre una secuencia de valores, como elementos en un arreglo
o una colección de datos. El ciclo for es una estructura de control de flujo
que facilita la ejecución repetitiva de código de manera controlada.
*/

#include <iostream>

int main(){

    for(int i = 0; i < 10; i+=1 ){
        std::cout << i << std::endl;
    }

    // Estructura de un ciclo 'For'

    /*
    for (inicialización; condición; expresión de actualización) {
    // Código a ejecutar en cada iteración
    }
    */


   // ¿Para que sirve un ciclo for?

    //Recorrer un arreglo
   int numeros[] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++) {
    std::cout << numeros[i] << " ";
    }

    // Realizar una accion un numero de veces

    for (int i = 0; i < 3; i++) {
    std::cout << "Hola, mundo!" << std::endl;
    }

    return 0;
}