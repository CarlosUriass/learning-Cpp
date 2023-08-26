#include <iostream>

int main() {
    // Qué es un array?
    /*
    Un "array" (arreglo) es una estructura de datos que te permite almacenar
    múltiples valores del mismo tipo en una secuencia contigua en la memoria.
    Cada valor se almacena en una posición llamada "elemento" y se accede
    a través de un índice numérico.
    */

    // ejemplo de array con valores iniciales
    int array_edades[] = {16, 17, 16, 18, 23, 21};

    //  cómo acceder a los valores del array
    /*
    Dentro del mundo de las ciencias de la computación, los índices numéricos
    empiezan en 0, es decir, dentro del array 'array_edades' el índice 0 tendría un
    valor de 16, el índice 1 tendría el valor de 17 y así sucesivamente.
    */

    std::cout <<"Primer elemento:"<< array_edades[0]<< std::endl; // Imprimiria el 16 porque se encuentra en el indice 0
    std::cout <<"Segundo elemento:"<< array_edades[1]<< std::endl; //Imprime el 17 por ser el elemento en la posicion 1

    // Ejemplo de declaración y asignación de valores en un array
    int numeros[5]; // Declarar un array de enteros con capacidad para 5 elementos
    numeros[0] = 10;
    numeros[1] = 20;
    numeros[2] = 30;
    numeros[3] = 40;
    numeros[4] = 50;


// Acceder a los elementos y mostrarlos en pantalla
    std::cout << "Primer elemento: " << numeros[0] << std::endl; // Imprime 10
    std::cout << "Segundo elemento: " << numeros[1] << std::endl; // Imprime 20
    std::cout << "Tercer elemento: " << numeros[2] << std::endl;  //Imprime 30
    return 0;
}