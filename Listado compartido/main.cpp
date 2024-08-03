#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fichero("listadoAlumnos.txt");
    int accion;
    string nombre;
    string linea;
    string contenido = "";

    cout << "LISTADO DE ALUMNOS: \n";
    while ( getline(fichero, linea ) ) {
        cout << linea + "\n";
        contenido += linea + "\n";
    }
    
    cout << " - Quieres poner un nombre n uevo? \n";
    cout << "- 1. Nombre nuevo\n";
    cout << "- 2. Salir\n";
    cin >> accion;
    switch(accion){
        case 1:
            cout << "Nuevo nombre: ";
            cin >> nombre;
            contenido += nombre + "\n";
            break;
        case 2: exit(0);
        default: exit(0);
}
 
    // Close the file
    fichero.close();


    ofstream f("listadoAlumnos.txt");
    f << contenido;
    f.close();
    }
    