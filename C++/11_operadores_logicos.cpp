#include <iostream>

int main() {
/*
los operadores lógicos son símbolos especiales que se utilizan para realizar
operaciones de lógica booleana en expresiones condicionales. 
Estos operadores permiten combinar o modificar el valor de las expresiones
booleanas (verdadero o falso) para tomar decisiones en función de ellas.
*/
    int edad;
    bool tiene_licencia;

    std::cout << "¿Cuál es tu edad?" << std::endl;
    std::cin >> edad;

    std::cout << "¿Tienes licencia de conducir? (1 para sí, 0 para no)" << std::endl;
    std::cin >> tiene_licencia;

    if (edad >= 18 && tiene_licencia) { // Evalua si tiene mas de 18 años y tiene licencia
        std::cout << "Puedes conducir un automóvil." << std::endl;
    } else if (edad >= 16 && !tiene_licencia) { // Evalua si tiene 18 años pero no tiene licencia
        std::cout << "Eres lo suficientemente mayor para obtener una licencia." << std::endl;
    } else { // Si ninguna condicion se cumple es porque no tiene 16 años ni tampoco tiene licencia
        std::cout << "No puedes conducir un automóvil." << std::endl;
    }

    return 0;
}

/*
Para entender mas de los operadores logicos, revisa el archivo '06_operadores.cpp'
*/