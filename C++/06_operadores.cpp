#include <iostream>
int main(){
// Operaciones aritmeticas 
int suma = 5 + 3;        // Suma
int resta = 10 - 4;      // Resta
int multiplicacion = 6 * 2; // Multiplicación
int division = 15 / 3;   // División
int modulo = 17 % 5;     // Módulo (resto de la división)

// Operaciones de comparacion (devuelve true o false)

bool igual = (5 == 5);    // Igual a
bool diferente = (10 != 5); // Diferente de
bool mayor = (8 > 3);      // Mayor que
bool menor = (6 < 9);      // Menor que
bool mayor_igual = (7 >= 7); // Mayor o igual que
bool menor_igual = (4 <= 4); // Menor o igual que

// Operaciones logicas

bool expresion1 = true;
bool expresion2 = false;

bool and_logico = expresion1 && expresion2; // AND lógico
bool or_logico = expresion1 || expresion2;  // OR lógico
bool not_logico = !expresion1;              // NOT lógico

// Operadores de asignacion 

int x = 10;
x += 5;  // Equivalente a x = x + 5
x -= 3;  // Equivalente a x = x - 3
x *= 2;  // Equivalente a x = x * 2
x /= 4;  // Equivalente a x = x / 4


// Operaciones de incremento y decremento 

int contador = 0;
contador ++; // Incremento (contador se convierte en 1)
contador --; // Decremento (contador se convierte en 0)
    return 0;
}


