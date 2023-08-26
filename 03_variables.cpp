#include <iostream>


int main() {
    // En C++, las variables se crean especificando el tipo de dato seguido del nombre de la variable.
    // Por ejemplo, aquí creamos una variable de tipo entero llamada 'edad' y le asignamos el valor 25.
    int edad = 25;

    // Imprimir el valor de la variable edad 

    std::cout << "La edad actual es: " << edad << std::endl;

    // También podemos crear variables de otros tipos, como 'nombre' de tipo cadena de caracteres (string).
    std::string nombre = "Juan";

    // Las variables pueden ser utilizadas para almacenar diferentes tipos de información y se pueden cambiar
    // a lo largo del programa. Por ejemplo, aquí actualizamos el valor de 'edad'.
    edad = 30;

    // Finalmente, podemos imprimir los valores de las variables utilizando 'std::cout'.
    std::cout << "Nombre: " << nombre << std::endl;
    // Recordemos que actualizamos el valor de la variable edad de 25 a 30
    std::cout << "Edad actualizada : " << edad << std::endl;

    

    return 0;
}
