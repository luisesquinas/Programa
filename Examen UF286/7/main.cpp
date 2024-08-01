#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

char elGranAleatorio() {
    char letra = 'A' + rand() % 26;
    return letra;
}

int main() {
    char aleatorio;
    string mensaje = "";

    srand(time(0));

    aleatorio = elGranAleatorio();
    mensaje += aleatorio;

    cout << mensaje;
    return 0;
}

