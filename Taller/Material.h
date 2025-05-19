#ifndef MATERIAL_H
#define MATERIAL_H
#include <string>

using namespace std;

class Material {
    protected:
    int id;
    string titulo;
    string genero;
    bool disponible;


    public:
    Material(int id, string titulo, string genero, bool disponible);
    

    virtual void mostrarInformacion() = 0;
};
#endif