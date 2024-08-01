#include <iostream>
using namespace std;

int main() {
    // declaración variables
    int casilla = 1;
    long long int cantidad = 1; //con "long long int" podemos poner números muy grandes
    string mensaje = "";

    // cálculos
    while (casilla<=64){
        mensaje += "Casilla "+to_string (casilla) +": contiene " +to_string (cantidad) +" granos de trigo\n";
        cantidad = cantidad * 2;
        casilla++;
    }

    // mostrar resultados
    cout << mensaje;
    return 0;
}
