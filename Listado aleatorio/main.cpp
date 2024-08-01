#include <iostream> // esto es una librería que añade más carácterísticas. De esta manera podemos sacar un mensaje final
#include <stdlib.h> // esta librería permite mostrar número aleatorios
using namespace std;

int main() {
    
    // declarar variables
    int aleatorio = 0;
    string mensaje = "";

    // cálculos
    aleatorio = rand();
    mensaje += to_string (aleatorio);

    // mostrar resultados
    cout << mensaje;
    return 0;
}