#ifndef LIBRO_H
#define LIBRO_H
#include "Material.h"
#include <string>

using namespace std;

class Libro : public Material {
    protected:
    string isbn;
    string autor;
    int cantidadpaginas;

    public:
    Libro(int id, string titulo, string genero, bool disponible, string isbn, string autor, int cantidadpaginas);

    virtual void mostrarInformacion() override;
};
#endif