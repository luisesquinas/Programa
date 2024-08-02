#include <iostream>
#include <vector>
#include <random>
#include <conio.h> // Para _getch()
#include <cstdlib> // Para system("cls")

int main() {
    std::vector<std::string> opciones = {
        "Akali + Zed",
        "Akshan + Pyke",
        "Ashe + Mundo",
        "Chino + Pantheon",
        "Darius + Sett",
        "Graves + Teemo",
        "Kaisa + Cartitas",
        "Maokai + Teemo",
        "Nautilus + Leona",
        "Nocturne + Cartitas",
        "Olaf + Mundo",
        "Seraphine + Sona",
        "Tahm + Yasuo",
        "Tahm + Zac",
        "Talon + Zed",
        "Tresh + Blitz",
        "Urgot + Singed",
        "Varus + Ashe",
        "Vexx + Neeko",
        "Xerath + Lux"
    };

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis;

    char tecla;
    while (true) {
        if (opciones.empty()) {
            system("cls");
            std::cout << "Elije uno, coño" << std::endl;
            std::cout << "Presiona cualquier tecla para salir." << std::endl;
            _getch(); // Esperar a que el usuario presione una tecla
            break;
        }

        // Actualizar el rango de la distribución aleatoria
        dis = std::uniform_int_distribution<>(0, opciones.size() - 1);

        // Seleccionar un índice aleatorio
        int indice_aleatorio = dis(gen);
        std::string resultado = opciones[indice_aleatorio];

        // Mostrar el resultado
        system("cls");
        std::cout << resultado << std::endl << std::endl;
        std::cout << "Si no te atreves con este wombo, pulsa Enter para generar un nuevo resultado, o Escape para salir." << std::endl;

        // Eliminar el resultado de la lista
        opciones.erase(opciones.begin() + indice_aleatorio);

        // Leer la tecla presionada
        tecla = _getch();
        if (tecla == 27) { // Escape para salir
            break;
        }
    }

    return 0;
}
