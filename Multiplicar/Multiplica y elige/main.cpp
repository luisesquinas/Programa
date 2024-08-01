#include <iostream>
using namespace std;

int multiplicar (int x, int y){
    int r = x * y;;
    return r; //esto significa que se acaba la función
   } 

int main() {
    // declaración variables
    string mensaje =  "...";
    string opcion;
    int resultado, numero1, numero2;
    
    //cálculos
    do{
        cout << "¿Qué quieres hacer? (multiplicar): ";
        cin >> opcion;
        if(opcion!="multiplicar"){;//si es diferente a "multiplicar, aparecerá el mensaje de cin"
            cout << "Esta funcion no esta definida \n";
        }
    }while(opcion != "multiplicar");//hasta que no pongamos "multiplicar, nos seguirá preguntando"

    cout << "Introduce primer numero: "; 
    cin >> numero1;

    cout << "Introduce segundo numero: ";
    cin >> numero2;

    resultado = multiplicar(numero1, numero2);

    mensaje = "El resultado es " + to_string(resultado) + "\n\n";


    // mostrar resultados
    cout << mensaje;
    return 0; //esto da por terminado el programa
}