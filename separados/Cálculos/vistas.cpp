#include <iostream>
using namespace std;

int obtenerNum1 (){
    int num;

    cout << "Introduce primer número: ";
    cin >> num;

    return num;
 }   

 int obtenerNum2 (){
    int num;

    cout << "Introduce segundo número: ";
    cin >> num;

    return num;
 }   

 void muestra(int r){
      cout << "El resultado es "+ to_string(r);
 }  