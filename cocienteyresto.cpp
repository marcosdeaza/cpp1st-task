// Tercer Ejercicio Tema 4 Ingeniería Informática Marcos de Aza | Cociente y Resto
// Este programa pide un dividendo y un divisor (decimales) y muestra el cociente y el resto.

#include <iostream>
#include <cmath> // Para fmod

using namespace std;

int main() {
    double dividendo, divisor, cociente, resto;

    cout << "Ingresa el dividendo: ";
    cin >> dividendo;

    cout << "Ingresa el divisor: ";
    cin >> divisor;
    // Comprobar que el divisor no sea cero (Agregue esta función porque la ví sencilla y necesaria)
    if (divisor == 0) {
        cout << "Error: El divisor no puede ser cero." << endl;
        return 1; // Salir del programa con error
    }

    cociente = dividendo / divisor;
    resto = fmod(dividendo, divisor); // Usar fmod para obtener el resto con decimales, % me da error al estar tratando con decimales.

    cout << "El resultado nos da " << cociente << " como cociente y " << resto << " como resto." << endl;

    return 0; // Salir del programa con éxito.
}

