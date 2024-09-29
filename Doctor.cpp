#include "Doctor.h"
using namespace std;

Doctor::Doctor(Calendario* age, string nom, int id)
	:agenda(age), nombreDoc(nom), cedula(id) {
}

Doctor::~Doctor() {
	delete agenda;
}

string Doctor::getNombreDoc() { return nombreDoc; }
int Doctor::getCedula() { return cedula; }
Calendario* Doctor::getAgenda() { return agenda; }

void Doctor::setNombre(string nom) { nombreDoc = nom; }
void Doctor::setCedula(int ced) { cedula = ced; }

string Doctor::toStringDoctor() {
	stringstream s;

	s << "----INFORMACION DEL DOCTOR----" << endl;
	s << "Nombre: " << nombreDoc << endl;
	s << "Cedula: " << cedula << endl;

	if (agenda != NULL) {
		s << agenda->toStringAgenda() << endl;
	}
	else {
		s << "El doctor no tiene agenda" << endl;
	}

	return s.str();
}
