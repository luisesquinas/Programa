#include <iostream>
#include <fstream>
#include "Configuracion.h"
using namespace std;


int Configuracion::getValorX(){ return this->valorX; }
void Configuracion::setValorX(int x){ this->valorX=x; }
int Configuracion::getValorY(){ return this->valorY; }
void Configuracion::setValorY(int x){ this->valorY=x; }
int Configuracion::getValorZ(){ return this->valorZ; }
void Configuracion::setValorZ(int x){ this->valorZ=x; }

void Configuracion::cargarFichero(){
    ifstream ficheroEntradaX("datoX.dat");
    ifstream ficheroEntradaY("datoY.dat");
    ifstream ficheroEntradaZ("datoZ.dat");
    ficheroEntradaX >> this->valorX;
    ficheroEntradaY >> this->valorY;
    ficheroEntradaZ >> this->valorZ;
    ficheroEntradaX.close();
    ficheroEntradaY.close();
    ficheroEntradaZ.close();
    }

    void Configuracion::guardaFichero(){
        ofstream ficheroSalidaX("datoX.dat");
        ofstream ficheroSalidaY("datoY.dat");
        ofstream ficheroSalidaZ("datoZ.dat");
        ficheroSalidaX << this->valorX;
        ficheroSalidaY << this->valorY;
        ficheroSalidaZ << this->valorZ;
        ficheroSalidaX.close();
        ficheroSalidaY.close();
        ficheroSalidaZ.close();
    }