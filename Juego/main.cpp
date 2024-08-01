#include <iostream>
using namespace std;

class Personaje {
    protected:
        string nombre;
        string equipo;
        int vida;
        int ataque;
    public:
        Personaje()         {Personaje ("anonimo"); }
        Personaje (string n){Personaje (n, "neutral", 50, 10); }
  
        Personaje (string n, string e, int v, int a){
            this->nombre = n;
            this->equipo = e;
            this->vida = v;
            this->ataque = a;
            cout << "Ha aparecido un nuevo jugador. Su nombre es " + this->nombre + ".\n";
        }
        string getNombre() { return this->nombre; }
        void setNombre(string n) { this->nombre=n; }

        string getEquipo() { return this->equipo; }
        void setEquipo(string e) {  this->equipo=e; }

        int getVida() { return this->vida; }
        void setVida(int v) { this->vida=v; }

        int getAtaque() { return this->ataque; }
        void setAtaque(int a) { this->ataque=a; }

        void ataca (Personaje &p){
            if (this->equipo == p.getEquipo() ){
                cout << this->nombre + " pensaba en atacar a " + p.getNombre() + " pero...\n";
                cout << "No se permite fuego amigo. \n\n";
            }else{
                int v = p.getVida() - this->ataque;
                p.setVida(v);
                cout << this->nombre+" ha atacado a "+p.getNombre()+" provocando un daño de " +to_string(this->ataque)+"\n";
                if(p.getVida()<=0){
                    cout << "Oh no! " + p.getNombre() + " ha muerto. \n\n";
                }
            }   
        }
        void curarse(){
            this->vida += 10;
            cout << this->nombre + " se ha curado un poco y ahora tiene "+to_string(this->vida)+" puntos de vida.\n";
        }
};

class Mago: public Personaje {
    public:
        int cantidadMana;
        Mago(): Personaje() { this->cantidadMana= 50;}
        Mago (string n, string e, int v, int a): Personaje (n, e, v, a) { this->cantidadMana= 50;}
        Mago (string n, string e, int v, int a, int m): Personaje (n, e, v, a) { this->cantidadMana=m;}

        void curarse(){
            this->vida += 20;
            cout << this->nombre + " se ha curado un poco y ahora tiene "+to_string(this->vida)+" puntos de vida.\n";
        }
};

int main() {

    Personaje jugador1 ("Frodo","equipo1",100,22);
    Personaje jugador2 ("Gollum", "equipo1",100,5);
    Mago jugador3 ("Saruman","equipo2",40,300, 80); //nombre, equipo, vida, ataque, maná

    jugador1.ataca(jugador2);
    jugador1.ataca(jugador3);
    jugador1.ataca(jugador3);
    
    jugador1.curarse();
    return 0;
}
