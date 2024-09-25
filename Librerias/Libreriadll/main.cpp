#include <iostream>
#include <windows.h>
using namespace std; 

int main() {

    HMODULE hModule = LoadLibraryA("operaciones.dll");
    GetProcAddress(hModule,"multiplica");

    int a=3, b=8, res;
    res = multiplica(a,b);
    cout << res;

  return 0;
}