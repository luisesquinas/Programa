#include <iostream>
#include "multiplica.h"
using namespace std;

int main (){
    int a=2, b=3, r=0;

    r = multiplica(a,b);

    cout << "El resultado es "+to_string(r)+"\n";
    return 0;
}