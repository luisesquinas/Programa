#include <iostream>
using namespace std;

string montaFrase (int x){
return "El valor es " + to_string(x) + "\n";
}

int muestra(int x) {
    while(x>=0){
        cout << montaFrase(x);
        x--;
    } 
    return 0;
}

int main(){
    // declaración variables
    string mensaje = "...";

    // cálculos
    muestra (5);
 
    
    // mostrar resultados
    // cout << mensaje;
    return 0;
}