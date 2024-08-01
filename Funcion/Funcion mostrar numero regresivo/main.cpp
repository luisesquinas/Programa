#include <iostream>
using namespace std;

int muestra (int x){
    while (x>0){
        cout << x << endl;
        x--;
    } 
    return 0;
}

int main (){
    // declaración variables
    string mensaje = "...";

    // cálculos
    muestra (5);
 
    
    // mostrar resultados
    // cout << mensaje;
    return 0;
}