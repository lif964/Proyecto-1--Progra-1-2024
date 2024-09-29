#ifndef CONTENEDORAESPECIALIDAD_H
#define CONTENEDORAESPECIALIDAD_H
#include "Especialidad.h"
#include "Calendario.h"
#include "ContenedorDoctores.h"
#include <iostream>
#include <sstream>
using namespace std;

class ContenedoraEspecialidad {
private:
	Especialidad** especialidades;
	int tam;
	int cant;
public:
	ContenedoraEspecialidad(int n);
	virtual ~ContenedoraEspecialidad();
	Especialidad* getEspecialidad(string);
	bool agregarEspecialidad(Especialidad*);
	bool ingresarEspecialidad(string, ContenedorDoctores*);
	bool ingresarDoctor(string, Calendario*, string, int);
	string toStringEspecialidades();
	string DoctorXEspecialidad();

};
#endif