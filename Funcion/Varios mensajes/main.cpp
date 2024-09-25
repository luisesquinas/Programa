#include <iostream>
#include <time.h>
using namespace std;


string saluda (string n ="Ramon"){
    return "Hola " + n + "\n";
}




int main() {
    // declaración variables
    string mensaje = "...";


    // cálculos
    mensaje = saluda("Miguel");
    mensaje += saluda("Irene"); //con el +=`acumula el mensaje
    mensaje += saluda("Jesus");
    mensaje += saluda();//Como no le damos el nombre, lo coge de arriba
    

    // mostrar resultados
    cout << mensaje;
    return 0;
}   