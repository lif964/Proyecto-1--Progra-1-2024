#include "Cita.h"
using namespace std;

Cita::Cita(string diaS, int h, Especialidad* e, Dueno* due, Doctor* doctor)
	:diaSemana(diaS), hora(h), esp(e), dueno(due), doc(doctor) {
}

Cita:: ~Cita() {
	delete esp;
	delete dueno;
}

string Cita::getDiaSemana() { return diaSemana; }

int Cita::getHora() { return hora; }

Especialidad* Cita::getEspecialidad() { return esp; }

Dueno* Cita::getDueno() { return dueno; }

Doctor* Cita::getDoctor() { return doc; }

void Cita::setDiaSemana(string diaS) { diaSemana = diaS; }

void Cita::setHora(int h) {
	if (h >= 8 && h <= 19) {
		hora = h;
	}
}

string Cita::toStringCita() {
	stringstream s;

	s << "----------DATOS DE LA CITA----------" << endl;
	s << "Dia: " << diaSemana << endl;
	s << "Hora de la cita: " << hora << endl;
	s << "Especialidad: ";
	if (esp != NULL) {
		s << esp->getEspecialidad() << endl;
	}
	else {
		s << "No hay una especialidad asignada" << endl;
	}
	s << "Dueno: ";
	if (dueno != NULL) {
		s << dueno->getNombreDueno() << endl;
	}
	else {
		s << "No hay un dueno asignado" << endl;
	}
	s << "Doctor: ";
	if (doc != NULL) {
		s << doc->getNombreDoc() << endl;
	}
	else {
		s << "No hay un doctor asignado" << endl;
	}

	return s.str();
}
