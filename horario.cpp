// Cuarto Ejercicio: Conversión de días a años, semanas y días
// Este programa pide un número de días y lo convierte en años, semanas y días.

#include <iostream>

using namespace std;

int main() {
    int dias;

    cout << "Ingrese el número de días: ";
    cin >> dias;

    // Calcular años, semanas y días
    int años = dias / 365; // Un año tiene 365 días
    int semanas = (dias % 365) / 7; // Días restantes convertidos a semanas
    int diasRestantes = (dias % 365) % 7; // Días restantes después de semanas

    // Mostrar los resultados
    cout << años << " año(s), " << semanas << " semana(s) y " << diasRestantes << " día(s)." << endl;

    return 0; // Salir del programa con éxito
}

