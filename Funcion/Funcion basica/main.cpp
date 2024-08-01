#include <iostream>
using namespace std;


string saluda (){
    return "Hola, ¿qué tal? \n";
}


int main() { //int es lo que indica qué va a devolver el resultado
    // declaración variables
    string mensaje = "...";


    // cálculos
    mensaje = saluda();
   
    // mostrar resultados
    cout << mensaje;
    return 0;
}
