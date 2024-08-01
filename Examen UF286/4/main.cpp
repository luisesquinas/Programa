#include <iostream>
using namespace std;


int main() {
    string mensaje =  "...";
    string nombre;
    
    cout << "Introduce tu nombre: ";
    cin >> nombre;

    mensaje = "Bienvenido, "+nombre+"\n\n";

    cout << mensaje;
    return 0;
}