#ifndef REVISTA_H
#define REVISTA_H
#include "Material.h"
#include <string>

using namespace std;

class Revista : public Material{
    protected:
    string nombre;
    string tematica;
    string edicion;
    public:
    Revista(int id, string nombre, string tematica, string edicion, bool disponible);

    void mostrarInformacion() override;

};

#endif