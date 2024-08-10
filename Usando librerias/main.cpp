#include <iostream>
#include "lib/aleatorio.h"
#include "lib/Menu.h"
#include "lib/sumatorio.h"
using namespace std;

int main() {

  cout << devuelveLetra();
  cout << "\n\n";

  Menu miMenu;
  miMenu.creaMenu("Empeza","Continuar","Seguir","Proseguir","Acabar");
  miMenu.gestionMenu();

  calcSumatorio();


  return 0;
}