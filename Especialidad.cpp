#include "Especialidad.h"
using namespace std;

Especialidad::Especialidad() 
	:especialidad(""),doctores(NULL){
}

Especialidad::Especialidad(string esp, ContenedorDoctores* docs) 
	:especialidad(esp),doctores(docs){
}

Especialidad::~Especialidad() {
	delete doctores;
}

string Especialidad::getEspecialidad() { return especialidad; }

void Especialidad::setEspecialidad(string nomEsp) { especialidad = nomEsp; }

ContenedorDoctores* Especialidad::getContenedorDoctores() { return doctores; }

string Especialidad::toStringEspecialidad() {
	stringstream s;

	s << "Especialidad: " << especialidad << endl;
	s << "Doctores asignados a esta especialidad:" << endl;

	if (doctores != NULL) {
		s << doctores->toStringDocs() << endl;
	}
	else {
		s << "No hay doctores asignados a esta especialidad" << endl;

	}

	return s.str();
}