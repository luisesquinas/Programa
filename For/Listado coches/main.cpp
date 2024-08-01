#include <iostream>
using namespace std;

int main() {
    string mensaje = "";

    string coches[4] = {"Cupra", "Toledo", "Tavascan", "Tarraco"};

    for (string i : coches) {
        mensaje += "- " + i + "\n";
    }

    // mostrar resultados
    cout << mensaje;
    return 0;
}