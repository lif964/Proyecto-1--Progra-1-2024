#ifndef INTERFAZHOSPITAL_H
#define INTERFAZHOSPITAL_H
#include <iostream>
#include <sstream>
#include <string>
#include "Hospital.h"
using namespace std;

class InterfazHospital {
private:
	Hospital* hospitalVet;
public:
	InterfazHospital();
	void MenuPrincipal();
	void opcion1();
	void ingresarEsp();
	void ingresarDoc();
	void ingresarDueno();
	void ingresarMascota();

	void opcion2();
	void opcion3();

	void guardarCita(string, int, Especialidad*, Dueno*, Doctor*);
	void sacarCita();
	void cancelarCita();
};
#endif
