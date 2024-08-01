#include <iostream>
using namespace std;

int main() { //el main lo dividiremos en tres partes; la parte en la que declaramos las variables, la parte en las que realiamos las operaciones y la parte en la que se muestra el resultado

  int base = 300; //estas son las cantidades. Los símbolos de € o % los pondremos al final
  int iva = 21;
  int irpf = 15;
  bool exento = false;

  int cantidadIva, cantidadIrpf, cantidadTotal = 0;  //de esta forma, todas las variables valen 0
  string mensaje = "El total de la factura es ";

  if  (!exento)  { //el símbolo! significa "lo contrario de"
    cantidadIva = base * iva/100; //esta parte la hace porque se cumple el if
  } 

  cantidadIrpf = base * irpf/100; //esta parte y la de abajo la hará siempre

  cantidadTotal = base + cantidadIva - cantidadIrpf;

  cout << mensaje + to_string (cantidadTotal); // Con el símbolo + se juntan dos trozos de texto. La función "to_string" sirve para que el sistema piense que lo del paréntesis es texto, así lo juntará
  return 0;
