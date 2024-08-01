#include "funciones.h"
using namespace std;


int main(){
    int numeroSecreto = aleatorio(1,10);
    int intentos;

    iniciar();
    juega(intentos,numeroSecreto);
    resultados(intentos);

    return 0;
}