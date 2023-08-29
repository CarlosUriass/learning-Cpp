/*
Utilizando los aprendizajes anteriores ya podemos empezar a resolver
algoritmos sencillos; un ejemplo de algoritmo es el siguiente:

Un productor de leche lleva el registro de lo que produce en litros, 
pero cuando entrega le pagan en galones. Ayude al productor a saber
cuánto recibirá por la entrega de su producción de un día. 

1 galón = 3.785 litros 
Costo galón $35.
*/

#include <iostream>
int main(){
    const double galon = 3.785;
    const int precioGalon = 35;

    int litrosProduccion;
    std::cout << "¿Cuanto fue la produccion del dia? (en litros)" << std::endl;
    std::cin >> litrosProduccion;

    double litosaGalones = litrosProduccion / galon;
    double ganancia = litosaGalones * precioGalon;

    std::cout << "La ganancia del dia es: " << ganancia << std::endl;


}

// ¿Por qué aprender este tipo de algoritmos?

/*
Practicar con este tipo de algoritmos es importante por varias razones:

1. Aplicación de Conceptos de Programación: Resolver problemas como este implica 
aplicar los conceptos de programación que se han aprendido, como entrada y 
salida de datos, operaciones aritméticas y uso de variables. 
Estas prácticas refuerzan la comprensión y habilidades fundamentales
en programación.

2. Resolución de Problemas: El proceso de desglosar un problema en pasos lógicos
y codificar soluciones efectivas mejora las habilidades de resolución de
problemas. A medida que los estudiantes abordan una variedad de desafíos,
se vuelven más adeptos a abordar y resolver problemas de manera eficiente.

3. Conversión de Unidades: Este ejercicio en particular involucra la conversión
de unidades de medida (de litros a galones) y la aplicación de una relación de 
conversión. Practicar este tipo de cálculos es útil en campos como la ingeniería,
la física y muchas otras disciplinas.

4. Comprensión del Valor de la Práctica: Los algoritmos y problemas prácticos
como este muestran a los estudiantes cómo la programación se aplica en situaciones
del mundo real. Esto puede motivarlos al ver que sus habilidades tienen un impacto 
tangible y pueden resolver problemas cotidianos.

5. Preparación para Desafíos Mayores: Al comenzar con problemas más simples
y progresar hacia desafíos más complejos, los estudiantes están mejor preparados 
para enfrentar problemas y proyectos más grandes en el futuro.

*/
