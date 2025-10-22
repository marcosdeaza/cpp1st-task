// Primer Ejercicio Tema 4 Ingeniería Informática Marcos de Aza | Suma y Media
// Este programa pide 4 números, calcula su suma y su media (promedio)

#include <iostream>
using namespace std;

int main() {
    int numero, numero2, numero3, numero4, suma, media;

    cout << "Introduce el primer número: ";
    cin >> numero;

    cout << "Introduce el segundo número: ";
    cin >> numero2;

    cout << "Introduce el tercer número: ";
    cin >> numero3;

    cout << "Introduce el cuarto número: ";
    cin >> numero4;

    suma = numero + numero2 + numero3 + numero4;
    media = suma / 4;

    cout << "La suma de los cuatro números es: " << suma << endl;
    cout << "La media de los cuatro números es: " << media << endl;

    return 0;
}

