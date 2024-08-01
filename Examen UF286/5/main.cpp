#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string mensaje = "...";
    int numero;
    double mitad;
    int doble;

    cout << "Introduce un número: ";
    cin >> numero;

    doble = numero * 2;
    mitad = double(numero) / 2;

    ostringstream stream;
    stream << mitad;
    string mitad_str = stream.str();

    size_t dot_pos = mitad_str.find('.');
    if (dot_pos != string::npos) {
        size_t last_nonzero = mitad_str.find_last_not_of('0');
        if (last_nonzero != string::npos && last_nonzero > dot_pos) {
            mitad_str.erase(last_nonzero + 1);
        } else {
            mitad_str.erase(dot_pos);
        }
    }

    mensaje = "Has introducido el " + to_string(numero) + ", su doble es " + to_string(doble) + " y su mitad es " + mitad_str + "." + "\n\n";

    cout << mensaje;

    return 0;
}