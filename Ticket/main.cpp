#include <iostream>
using namespace std;

class Tiquet{
    public:
        int identificador;
        string fecha;
        string productos[10];
        double total;
};

class Declaracion{
    public:
        int identificador;
        string fecha;
        Tiquet tiquets[10];
        double total;
        double calculaTotal(){
            this->total = 0;
            for( int i=0; i<10; i++){
                this->total += tiquets[i].total;
            }
            return this->total;
        }
};

int main() {

    Tiquet t1;
    Tiquet t2;
    Declaracion d1;
    
    t1.identificador = 245;
    t1.fecha = "18/07/2024";
    t1.productos[0] = "Manzanas";
    t1.productos[1] = "Leche";
    t1.total = 34.12;
    
    t2.identificador = 246;
    t2.fecha = "18/07/2024";
    t2.productos[0] = "Portatil Acer C4223";
    t2.productos[1] = "Mouse LG M23";
    t2.total = 502.50;

    d1.identificador = 11;
    d1.fecha = "18/07/2024";
    d1.tiquets[0] = t1;
    d1.tiquets[1] = t2;
    d1.total = d1.calculaTotal();

    cout << "El total es: "+ to_string(d1.total);

    return 0;
}
