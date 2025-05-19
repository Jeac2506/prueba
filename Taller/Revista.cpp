#include "Revista.h"
#include <iostream>

using namespace std;

Revista::Revista(int id, string nombre, string tematica, string edicion, bool disponible)
    : Material(id, nombre, tematica, disponible), nombre(nombre), tematica(tematica), edicion(edicion)
{}
void Revista::mostrarInformacion() {
    cout << "===== Informacion de la Revista =====" << endl;
    cout << "Nombre: "<< nombre << endl;
    cout << "Tematica: " << tematica << endl;
    cout << "Edicion: "<< edicion << endl;
    cout << "Estado: " << (disponible ? "Disponible" : "No disponible") << endl;
    cout << "ID: " << id << endl;
    cout << "=================================" << endl << endl;


}