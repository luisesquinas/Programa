#include <iostream>
#include <time.h>
using namespace std;


int main() {
    // declaración variables
    string mensaje =  "...";
    string nombre;
    
    //cálculos
    cout << "Introduce tu nombre: ";
    cin >> nombre;

    mensaje = "Hola "+nombre+"\n\n";

    // mostrar resultados
    cout << mensaje;
    return 0;
}
