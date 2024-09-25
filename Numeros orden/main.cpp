#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <sstream>
using namespace std;

int main() {
    ifstream ficheroEntrada("datos.dat");
    ofstream ficheroSalida("salida.dat");

    vector<int> numeros;
    string linia;

    // Leer linia por linia y guardar en el vector numeros
    while (getline(ficheroEntrada, linia)) {
        stringstream ss(linia);
        int numero;

        while (ss >> numero) {
            numeros.push_back(numero);
         }    
    }

    //Ordena los números
    sort(numeros.begin(), numeros.end());

    //Guardar los números ordenados en el archivo de salida
    bool inicio = true;
    for (int num : numeros) {
        if(inicio) inicio=false;
        else ficheroSalida << ", ";

        ficheroSalida << num;
    }

    ficheroEntrada.close();
    ficheroSalida.close();

    cout << "Los números han sido ordenados y guardados en salida.dat \n";
    return 0;
}