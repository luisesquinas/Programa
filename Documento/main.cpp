#include <iostream>
#include <fstream>
using namespace std;

class Documento {
    public:
        string nombre;
        Documento(): Documento("Sin nombre"){}
        Documento(string n){  this ->nombre=n;}
};
class Informe: public Documento {
    public:
        string texto;
        Informe(): Documento(){ }
        Informe(string n): Informe(n,"Lorem ipsum dolor sit vis amet."){}
        Informe(string n, string t){this->nombre=n, this->texto=t; }    
};  
class Factura: public Documento {
     public:
        double total;
        Factura(): Documento(){ }
        Factura(string n): Factura(n,0){}
        Factura(string n, double t){this->nombre=n, this->total=t; }    
};

int main() {

    int tipo;
    string nombre;
    string texto;
    double total;
    int accion;
    Documento d;
    Informe i;
    Factura f;
   
    cout << "Que quieres hacer? \n";
    cout << "1. Crear informe \n";
    cout << "2. Crear factura \n";
    cout << "3. Crear documento generico \n";
    cin >> tipo;

    cout << "Introduce nombre: ";
    cin >> nombre;

    switch(tipo){
        case 1: // informe
            cout << "Introduce el texto: ";
            cin >> texto;
            i.nombre = nombre;
            i.texto = texto;
            break;
        case 2: //factura
            cout << "Introduce el total: ";
            cin >> total;
            f.nombre = nombre;
            f.total = total;
            break;
        case 3:
            d.nombre = nombre;
            break;
        default: break;
    }
        
    cout << "Que hacemos con el documento? \n";
    cout << "1. Guardar \n";
    cout << "2. Imprimir \n";
    cout << "3. Descartar \n";
    cin >> accion; 

    switch(accion){
        case 1:{ // guardar fichero
            ofstream fichero(nombre+".txt");
            if( tipo==1 ){
                fichero << i.texto+"\n\n"+i.texto;
            }
            if( tipo==2 ){
                fichero << f.total;
            }
            fichero.close();
            break;
        } 
        case 2:{ // mostrar por pantalla
            cout << "---------------\n";
            cout << nombre+"\n";
            cout << "---------------\n";
            if( tipo==1 ){
                cout << i.texto;
            } 
            if( tipo==2 ){
                cout << f.total;
            }
            break;
        }
        case 3: break; // descartar
        default: break;
    }        

    return 0;
}
