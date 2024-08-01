#include <iostream>
using namespace std;
int main() {

  int hora = 17;
  string mensaje = "";

  if (hora>=5 && hora <14) {
    mensaje = "Buenos días";
  }

  if (hora>=14 && hora <20) {
    mensaje = "Buenas tardes";
  }

  if (hora>=20 || hora <5) {
    mensaje = "Buenas noches";
  } 
  cout << mensaje;
  return 0;
  }