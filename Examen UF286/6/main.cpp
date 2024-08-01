#include <iostream>
using namespace std;

int main() {
    // declaración variables
    int numero = 10;
    string mensaje = "";

    // cálculos
    while (numero > 1) {
        mensaje += to_string(numero) + " manzanitas tiene el manzano, y de " + to_string(numero) + ", una cayó\n";
        numero--;
    }

    // Mensaje para la última manzana caída
    mensaje += "1 manzanita tiene el manzano, y de 1, una cayó\n";
    mensaje += "Y el manzano, sin manzanitas se quedó";

    // mostrar resultados
    cout << mensaje;
    return 0;
}

