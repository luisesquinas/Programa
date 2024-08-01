#include <iostream>
#include "calculos.h"
#include "vistas.h"
using namespace std;


int main() {
    int resultado, num1, num2;

    num1 = obtenerNum1();
    num2 = obtenerNum2();

    resultado = multiplica (num1, num2);
    
    muestra(resultado);
    return 0;
}