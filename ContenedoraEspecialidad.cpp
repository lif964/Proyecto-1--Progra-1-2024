#include "ContenedoraEspecialidad.h"
using namespace std;

ContenedoraEspecialidad::ContenedoraEspecialidad(int n) {
	especialidades = new Especialidad * [n];
	cant = 0;
	tam = n;
	for (int i = 0; i < tam; i++)
		especialidades[i] = NULL;
}

ContenedoraEspecialidad:: ~ContenedoraEspecialidad() {
	for (int i = 0; i < cant; i++)
		if (especialidades[i] != NULL)
			delete especialidades[i];
	delete[]especialidades;
}

Especialidad* ContenedoraEspecialidad::getEspecialidad(string esp) {
	for (int i = 0; i < cant; i++) {
		if (especialidades[i] != NULL && especialidades[i]->getEspecialidad() == esp) {
			return especialidades[i];
		}
	}
	return NULL;
}

bool ContenedoraEspecialidad::agregarEspecialidad(Especialidad* especialidad) {
	if (cant < tam && especialidades != NULL) {
		especialidades[cant++] = especialidad;
		return true;
	}
	return false;
}

bool ContenedoraEspecialidad::ingresarEspecialidad(string nom, ContenedorDoctores* doctores) {
	Especialidad* especialidad = new Especialidad(nom, doctores);
	return agregarEspecialidad(especialidad);
}

bool ContenedoraEspecialidad::ingresarDoctor(string especialidad, Calendario* agenda, string nom, int ced) {
	Especialidad* esp = getEspecialidad(especialidad);
	if (esp != NULL) {
		Doctor* doc = new Doctor(agenda, nom, ced);
		if (esp->getContenedorDoctores()->agregarDoc(doc)) {
			return true;
		}
		delete doc;
	}
	return false;
}
string ContenedoraEspecialidad::toStringEspecialidades() {
	stringstream s;

	s << "----------ESPECIALIDADES----------" << endl;
	for (int i = 0; i < cant; i++)
		if (especialidades[i] != NULL)
			s << especialidades[i]->getEspecialidad() << endl;
	return s.str();
}

string ContenedoraEspecialidad::DoctorXEspecialidad() {
	stringstream s;

	s << "----------ESPECIALIDADES Y DOCTORES----------" << endl;
	for (int i = 0; i < cant; i++) {
		if (especialidades[i] != NULL) {
			s << especialidades[i]->toStringEspecialidad() << endl;
		}
	}
	return s.str();
}