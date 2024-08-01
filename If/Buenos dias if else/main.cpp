#include <iostream>
using namespace std;

int main() {

  int hora = 17;
  string mensaje = "";

  if (hora>=5 && hora <14) {
    mensaje = "Buenos días";

  } else if (hora>=14 && hora <20) {
    mensaje = "Buenas tardes";

  } else {
    mensaje = "Buenas noches";
  } 

  cout << mensaje;
  return 0;
  }