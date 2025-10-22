// Quinto ejercicio: Mostrar letra anterior y siguiente
// Este programa pide una letra al usuario y muestra la letra anterior y la siguiente.

#include <iostream>

using namespace std;

int main() {
    char letra;

    // Solicitar al usuario que ingrese una letra
    cout << "Ingrese una letra: ";
    cin >> letra;

    // Verificar que la letra ingresada sea una letra válida
    if (isalpha(letra)) {
        char anterior = letra - 1; // Letra anterior
        char siguiente = letra + 1; // Letra siguiente

        // Mostrar las letras anteriores y siguientes
        cout << "La letra anterior a '" << letra << "' es '" << anterior << "'." << endl;
        cout << "La letra siguiente a '" << letra << "' es '" << siguiente << "'." << endl;
    } else {
        cout << "Por favor, ingrese una letra válida." << endl;
    }

    return 0; // Salir del programa con éxito
}

