#include <iostream>
using namespace std;

int main() {

    // declaración variables
    string lista[5];
    bool indicadores [5] = {true, true, true, true, true,};
    int comprado; 

    for (int i=0 ; i<5 ; i++){
        cout << "Introduce el elemento "+to_string (i+1)+" de la lista: ";
        cin >> lista[i];
    }

    while(indicadores[0]||indicadores[1]||indicadores[2]||indicadores[3]||indicadores[4]){ //mientras haya elementos en la lista

        cout << "\nLISTA \n";
        for (int i=0 ; i<5 ; i++){
            if (indicadores[i]){
                cout << to_string (i+1)+". "+lista[i]+"\n"; 
             }   
        }    
        cout << "\n¿Qué número has comprado?\n";
        cin >> comprado;
        indicadores [comprado-1]= false;
    }

    cout << "\nCompra finalizada\n";

   
    return 0;
}