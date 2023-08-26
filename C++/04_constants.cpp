/*
En C++, las constantes son valores que no pueden modificarse una vez que se les ha asignado un valor inicial. 
Son útiles cuando necesitas asegurarte de que un valor no cambie durante la ejecución del programa. 
Las constantes pueden ser de diferentes tipos de datos y se definen utilizando la palabra clave const.
*/

// Definir constantes literales

const double pi = 3.141592;
const int edad = 18;
 /*
Las constantes sivren para:

- Evitar cambios accidentales en valores importantes.
- Hacer que el código sea más legible y comprensible al darle nombres significativos a los valores.
- Facilitar la actualización y el mantenimiento al cambiar un valor en un solo lugar en todo el código.
*/

#include <iostream>

int main(){
    const double pi = 3.131592; // Definir pi como constante 

    std::cout << "El valor de la constante pi es: " << pi << std::endl; // Imprimir a la pantalla 

    return 0;
}

