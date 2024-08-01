#include <iostream>
using namespace std;

class Libro {
    private:
        string titulo;
        string autor;

    public:
        void setTitulo(string t) {
            titulo = t;
        }

        string getTitulo() {
            return titulo;
        }

        void setAutor(string a) {
            autor = a;
        }

        string getAutor() {
            return autor;
        }
};

int main() {

    Libro miLibro;

    miLibro.setTitulo("Fray Perico y su borrico");
    miLibro.setAutor("El barco de vapor");

    string mensaje = "Titulo: " + miLibro.getTitulo() + "\n" +  "Autor: " + miLibro.getAutor() + "\n";
       
    cout << mensaje;

    return 0;
}
