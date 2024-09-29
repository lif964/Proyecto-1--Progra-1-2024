#ifndef ESPECIALIDAD_H
#define ESPECIALIDAD_H
#include "ContenedorDoctores.h"
#include <iostream>
#include <sstream>
using namespace std;

class Especialidad {
private:
	string especialidad;
	ContenedorDoctores* doctores;
public:
	Especialidad();
	Especialidad(string, ContenedorDoctores*);
	virtual ~Especialidad();

	string getEspecialidad();
	void setEspecialidad(string);
	ContenedorDoctores* getContenedorDoctores();

	string toStringEspecialidad();
};
#endif
