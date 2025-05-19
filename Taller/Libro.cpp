#include "Libro.h"
#include <iostream>

using namespace std;

Libro::Libro(int id, string titulo, string genero, bool disponible, string isbn, string autor, int cantidadpaginas): Material(id, titulo, genero, disponible),isbn(isbn), autor(autor), cantidadpaginas(cantidadpaginas){
    
}
void Libro::mostrarInformacion() {
    cout << "===== Informacion del Libro =====" << endl;
    cout << "Título: "<< titulo << endl;
    cout << "Autor: "<< autor << endl;
    cout << "ISBN: "<< isbn << endl;
    cout << "Genero: "<< genero << endl;
    cout << "Páginas: " << cantidadpaginas <<endl;
    cout << "Estado: " << (disponible ? "Disponible" : "No disponible") << endl;
    cout << "=================================" << endl << endl;


} 
