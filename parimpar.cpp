// Segundo Ejercicio Tema 4 Ingeniería Informática Marcos de Aza | Par o Impar
// Este programa pide un número, calcula si es par o impar y muestra 0 (par) o 1 (impar)

#include <iostream>
using namespace std;

int main() {
    int numero, resultado;

    // Pedir un número al usuario
    cout << "Ingresa un número: ";
    cin >> numero;

    // Calcular el residuo al dividir entre 2
    resultado = numero % 2;

    // Mostrar el resultado (0 si es par, 1 si es impar)
    cout << "El resultado es: " << resultado << endl;

    return 0;
}

