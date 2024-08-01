#include <iostream>
#include <time.h>
using namespace std;

int main() {
    // declaración variables
    int num= 0;
    string mensaje = "";
    srand(time(NULL));

    // cálculos
    srand(time(NULL));

    for( int i = 0 ;i<=10 ; i++ ){ //este bucle lo hará de 0 a 10 veces (11 veces)
        num= rand(); //esto asigna un número aleatorio (random)
        mensaje += to_string(num) + "\n";

    }

    // mostrar resultados
    cout << mensaje;
    return 0;
}