#include <iostream>
using namespace std;

class Empleado{
    private:
        string nombre;
        int id;
    public:
        Empleado(){
            Empleado("Anonimo");
        }    
        Empleado (string n) {
            Empleado(n,0);
        }    
        Empleado (string n, int i) {
            this->nombre = n;
            this->id = i;
        }    
        void setNombre(string n) { this->nombre=n; }
        string getNombre() { return this->nombre; }
        void setId(int i) { this->id=i; }
        int getId() { return this->id; }
};

int main() {

    Empleado e1; 
    Empleado e2("Juan");
    Empleado e3("Mireia",23);


    return 0;
}
