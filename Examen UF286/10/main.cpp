#include <iostream>
#include <iomanip>
#include <ctime>
#include <sstream>

using namespace std;


string obtenerFechaActual() {
    time_t t = time(nullptr);
    
    tm* tiempoLocal = localtime(&t);
    
    stringstream fechaStream;
    fechaStream << setw(2) << setfill('0') << tiempoLocal->tm_mday << "."
                << setw(2) << setfill('0') << (tiempoLocal->tm_mon + 1) << "."
                << (tiempoLocal->tm_year + 1900);
    
    return fechaStream.str();
}

int main() {
    string mensaje = "Hoy es " + obtenerFechaActual();
    
    cout << mensaje + "\n";
    
    return 0;
}