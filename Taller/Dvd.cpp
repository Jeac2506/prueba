#include "Dvd.h"
#include <iostream>

using namespace std;

Dvd::Dvd(int id, string titulo, string genero, bool disponible, string director, double duracion)
    : Material (id, titulo, genero, disponible), director(director), duracion(duracion)
    {}

void Dvd::mostrarInformacion() {
    cout << "===== Informacion del DVD =====" << endl;
    cout << "Título: "<< titulo << endl;
    cout << "Director: " << director << endl;
    cout << "Genero: "<< genero << endl;
    cout << "Duracion: " << duracion << endl;
    cout << "Estado: " << (disponible ? "Disponible" : "No disponible") << endl;
    cout << "ID: " << id << endl;
    cout << "=================================" << endl << endl;


}