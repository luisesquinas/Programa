#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int aleatorio(int inicial, int final) {
    srand(time(0));
    int f = final-inicial+1;
    return (rand() % f)+inicial;
}

void iniciar(){
      cout << "He pensado un numero del 1 al 10. Intenta acertarlo.\n";
}

void juega(int &intentos, int numeroSecreto){
    int numeroIntento;

    for( intentos=0 ; numeroIntento!=numeroSecreto ; intentos++){
        cout << "Escribe un numero: ";
        cin >> numeroIntento;
        if(numeroIntento<numeroSecreto){
            cout << "- Demasiado pequeño... Prueba uno mas grande.\n";
        }
        if(numeroIntento>numeroSecreto){ 
            cout << "- Demasiado grande... Prueba uno menor.\n";
        }
    }
}

void resultados(int intentos){
    cout << "\nHAS ACERTADO EN INTENTOS " +to_string(intentos)+ "!!!\n\n";
  }  

  /prueba git