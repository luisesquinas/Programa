#include <iostream>
using namespace std;

int main() {
    int hora = 14;
    string mensaje = "";

    switch (hora){
        case 0 ... 4: mensaje="Buenas noches";
        break;
        case 5 ... 14: mensaje="Buenos días";
        break;
        case 15 ... 19: mensaje="Buenas tardes";
        break;
        case 20 ... 23: mensaje="Buenas noches";
        break;
        default: break;
}

  cout << mensaje;
  return 0;
  }