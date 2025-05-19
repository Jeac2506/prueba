#include <iostream>
#include "Material.h"


using namespace std;

Material::Material(int id, string titulo, string genero, bool disponible)
{
    this->id = id;
    this->titulo = titulo;
    this->genero = genero;
    this->disponible = disponible;
}