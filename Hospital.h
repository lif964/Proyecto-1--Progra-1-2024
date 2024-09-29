#ifndef HOSPITAL_H
#define HOSPITAL_H
#include <iostream>
#include <sstream>
#include "ContenedorCitas.h"
#include "ContenedoraEspecialidad.h"
#include "ContenedoraDueno.h"
using namespace std;

class Hospital {
private:
	ContenedorCitas* citas;
	ContenedoraEspecialidad* especialidades;
	ContenedoraDueno* duenos;
public:
	Hospital();
	Hospital(ContenedorCitas*, ContenedoraEspecialidad*, ContenedoraDueno*);
	virtual~Hospital();
	ContenedorCitas* getCita();
	ContenedoraEspecialidad* getEspecialidad();
	ContenedoraDueno* getDueno();
};
#endif