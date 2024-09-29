#include "Dueno.h"
using namespace std;


Dueno::Dueno(string nom, int ced, string dir, int tel, ContenedoraMascota* mascot)
	:nombre(nom), cedula(ced), direccion(dir), telefono(tel), mascotas(mascot) {
}
Dueno::~Dueno() {
	delete mascotas;
}

string Dueno::getNombreDueno() { return nombre; }
int Dueno::getCedula() { return cedula; }
string Dueno::getDireccion() { return direccion; }
int Dueno::getTelefono() { return telefono; }
ContenedoraMascota* Dueno::getMascotas() { return mascotas; }

void Dueno::setNombreDueno(string nom) { nombre = nom; }
void Dueno::setCedula(int ced) { cedula = ced; }
void Dueno::setDireccion(string dir) { direccion = dir; }
void Dueno::setTelefono(int tel) { telefono = tel; }

string Dueno::toStringDueno() {
	stringstream s;

	s << "----------DATOS DEL DUEÑO----------" << endl;
	s << "Nombre: " << nombre << endl;
	s << "Cedula: " << cedula << endl;
	s << "Numero de telefono: " << telefono << endl;
	s << "Direccion: " << direccion << endl;

	if (mascotas != NULL) {
		s << mascotas->toStringCM() << endl;
	}
	else {
		s << "Este dueño no tiene mascotas" << endl;
	}

	return s.str();
}