#include <iostream>
#include "Configuracion.h"
using namespace std;

int main() { 
    Configuracion conf;
    int x;

    conf.cargarFichero();

    cout << "Tu número es el " + to_string(conf.getValorX()) + ". ¿Quieres cambiarlo?\n";
    cout << "Introduce nuevo número: ";
    cin >> x;
    conf.setValorX(x);

   
    conf.guardaFichero();

    return 0;
}
