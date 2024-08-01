#include <iostream>
using namespace std;

int multiplicar (int x, int y){
    int r = x * y;;
    return r; //esto significa que se acaba la función
   } 

int sumar (int x, int y){
    int r = x + y;
    return r; //esto significa que se acaba la función
   } 


int main() {
    // declaración variables
    string mensaje =  "...";
    string opcion;
    int resultado, numero1, numero2;
    
    //cálculos
    do{
        cout << "¿Qué quieres hacer? (multiplicar, sumar): ";
        cin >> opcion;
        if(opcion!="multiplicar" && opcion!="sumar"){//si es diferente a "multiplicar y sumar, aparecerá el mensaje de cin"
            cout << "Esta funcion no esta definida \n";
        }
    }while(opcion!= "multiplicar" && opcion!="sumar");//hasta que no pongamos "multiplicar" o "sumar", nos seguirá preguntando"

    cout << "Introduce primer numero: "; 
    cin >> numero1;

    cout << "Introduce segundo numero: ";
    cin >> numero2;

    if (opcion=="multiplicar"){
        resultado = multiplicar (numero1, numero2);
    }
    if (opcion=="sumar"){
        resultado = sumar (numero1, numero2);
    }


    mensaje = "El resultado es " + to_string(resultado) + "\n\n";


    // mostrar resultados
    cout << mensaje;
    return 0; //esto da por terminado el programa
}