#include <iostream>
#include "saludo.h"
using namespace std;

int main() {
    string mensaje = "...";

    mensaje = saludo();

    cout << mensaje;
    return 0;
}
