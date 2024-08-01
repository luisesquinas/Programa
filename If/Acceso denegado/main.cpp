#include <iostream> 
using namespace std;

int main() {

    int edad = 44;
    int genero = 2;
    string mensaje = "";

    if (edad<18) {
        mensaje = "Acceso denegado";
    }else {

        switch (genero) {
            case 1: //hombre
                mensaje = "Acceso permitido a baño de hombres";
                break;
            case 2: //mujer
                mensaje = "Acceso permitido a baño de mujeres";
                break;

            default: break;
        }
    }

 cout << mensaje;
  return 0;
  }