#include <iostream>
#include <string> // importante para usar std::string
#include "Libro.h"
#include "Dvd.h"
#include "Revista.h"

using namespace std;

int main() {
    // Crear objetos con std::string explícito
    Libro libro1(
        1,
        string("Cien Años de Soledad"),
        string("Novela"),
        true,
        string("978-3-16-148410-0"),
        string("Gabriel García Márquez"),
        471
    );

    Dvd dvd1(
        2,
        string("Interstellar"),
        string("Ciencia Ficción"),
        true,
        string("Christopher Nolan"),
        169.5
    );

    Revista revista1(
        3,
        string("National Geographic"),
        string("Ciencia"),
        string("Marzo 2025"),
        false
    );

    // Arreglo de punteros a la clase base
    Material* materiales[3];
    materiales[0] = &libro1;
    materiales[1] = &dvd1;
    materiales[2] = &revista1;

    // Mostrar información de cada objeto
    for (int i = 0; i < 3; i++) {
        materiales[i]->mostrarInformacion();
    }

    return 0;
}
