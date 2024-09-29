#ifndef DUENO_H
#define DUENO_H
#include <iostream>
#include <sstream>
#include <string>
#include "ContenedoraMascota.h"
using namespace std;

class Dueno {
private:
	string nombre;
	int cedula;
	string direccion;
	int telefono;
	ContenedoraMascota* mascotas;
public:
	Dueno(string, int, string, int, ContenedoraMascota*);
	virtual ~Dueno();

	string getNombreDueno();
	int getCedula();
	string getDireccion();
	int getTelefono();
	ContenedoraMascota* getMascotas();

	void setNombreDueno(string nom);
	void setCedula(int ced);
	void setDireccion(string dir);
	void setTelefono(int tel);

	string toStringDueno();

};
#endif
