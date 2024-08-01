#include <iostream>
using namespace std;

int main() {
    bool permisoArea1 = true;
    bool permisoArea2 = false;

    string areaElegida;
    cout << "Ingrese el nombre del área que desea comprobar (area1 o area2): ";
    cin >> areaElegida;

    if (areaElegida == "area1") {
        if (permisoArea1) {
            cout << "Se ha concedido permiso para acceder al área 1\n";
        } 
    } else if (areaElegida == "area2") {
        if (permisoArea2) {
            cout << "Se ha concedido permiso para acceder al área 2\n";
        } else {
            cout << "Se ha concedido permiso para acceder al área 2\n";
        }
    } else {
        cout << "Área no válida.\n";
    }

    return 0;
}