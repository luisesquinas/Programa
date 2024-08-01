#include <iostream>
using namespace std;

int main() {
    // declaración variables
    
    long long int cantidad = 1; //con "long long int" podemos poner números muy grandes
    string mensaje = "";

    // cálculos
    for (int casilla = 1 ; casilla<=64 ; casilla++){ //al ser "for", dentro del paréntesis van tres valores
        mensaje += "Casilla "+to_string (casilla) +": contiene " +to_string (cantidad) +" granos de trigo\n";
        cantidad = cantidad * 2;
    }

    // mostrar resultados
    cout << mensaje;
    return 0;
}
