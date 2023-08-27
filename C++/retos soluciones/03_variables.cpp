/*
Define las siguientes variables y despues, puedes imprimir a la consola con
algun mensaje referente a su valor .

Enteros (int):
Nombre de variable: edad
Valor: 25

Punto flotante (float):
Nombre de variable: altura
Valor: 1.75

Carácter (char):
Nombre de variable: inicial
Valor: 'A'

Cadena de caracteres (string):
Nombre de variable: nombre
Valor: "Alice"

Booleano (bool):
Nombre de variable: esEstudiante
Valor: true

Enteros (int):
Nombre de variable: cantidadDeHijos
Valor: 2

Punto flotante (float):
Nombre de variable: peso
Valor: 68.5

Carácter (char):
Nombre de variable: genero
Valor: 'M'

Cadena de caracteres (string):
Nombre de variable: ciudad
Valor: "Madrid"

Booleano (bool):
Nombre de variable: tieneMascota
Valor: false


Reto extra: Imprime el tipo de cada variable
#include <typeinfo> // Necesario para usar typeid
*/

#include <iostream>
#include <string>
#include <typeinfo>

int main(){
    // Escribe aqui tu respuestas

    // Definir variables
    int edad = 25;
    float altura = 1.75;
    char inicial = 'A';
    std::string nombre = "Alice";
    bool esEstudiante = true;
    int cantidadDeHijos = 2;
    float peso = 68.5;
    char genero = 'M';
    std::string ciudad = "Madrid";
    bool tieneMascota = false;

    // Imprimir valores de varibles

    std::cout << "Bienvenida, " << nombre << std::endl; // Bienvenida, Alicia
    std::cout << "Feliz cumpleaños numero: " << edad << std::endl; // Feliz cumpleaños numero 25
    std::cout << ciudad << "?" << "Hemosa ciudad!" << std::endl; // Madrid? Hermosa ciudad!

    //Imprimir el tipo de variables

    std::cout << "tipo de dato en la variable altura: " << typeid(altura).name() << std::endl; // El tipo de dato es float
    std::cout << "tipo de dato de la variable tiene mascota:" << typeid(tieneMascota).name() << std::endl; // bool

    return 0;
}

