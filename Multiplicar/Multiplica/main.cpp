#include <iostream>
#include <time.h>
using namespace std;

int multiplica (int x, int y){
    int resultado = x * y;
    return resultado;
}

int main() {
    // declaración variables
    string mensaje =  "...";
    int x = multiplica (4, 8);


   mensaje = to_string (x);
    

    // mostrar resultados
    cout << mensaje;
    return 0;
}
