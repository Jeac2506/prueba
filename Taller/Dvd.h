#ifndef DVD_H
#define DVD_H
#include "Material.h"
#include <string>

using namespace std;

class Dvd : public Material {
    protected:
    string director;
    double duracion;

    public:
    Dvd(int id, string titulo, string genero, bool disponible, string director, double duracion);
    
    virtual void mostrarInformacion() override;

};

#endif