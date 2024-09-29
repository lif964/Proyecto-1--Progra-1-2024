#include "ContenedorDoctores.h"
using namespace std;

ContenedorDoctores::ContenedorDoctores(int n) {
	doctores = new Doctor * [n];
	cant = 0;
	tam = n;
	for (int i = 0; i < tam; i++)
		doctores[i] = NULL;
}

ContenedorDoctores::~ContenedorDoctores() {
	for (int i = 0; i < cant; i++)
		delete doctores[i];
	delete[]doctores;
}

Doctor* ContenedorDoctores::getDoctor(int cedula) {
	for (int i = 0; i < cant; i++) {
		if (doctores[i] != NULL && doctores[i]->getCedula() == cedula)
			return doctores[i];
	}
	return NULL;
}

bool ContenedorDoctores::agregarDoc(Doctor* doc) {
	if (cant < tam) {
		doctores[cant++] = doc;
		return true;
	}
	return false;
}

bool ContenedorDoctores::ingresarDoctor(Calendario* agenda, string nom, int ced) {
	Doctor* doc = new Doctor(agenda, nom, ced);
	return agregarDoc(doc);
}

string ContenedorDoctores::toStringDocs() {
	stringstream s;

	s << "----------DOCTORES----------" << endl;
	for (int i = 0; i < cant; i++) {
		s << doctores[i]->toStringDoctor() << endl;
	}
	return s.str();
}