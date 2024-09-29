#ifndef DOCTOR_H
#define DOCTOR_H
#include <iostream>
#include <sstream>
#include "Calendario.h"
using namespace std;

class Doctor {
private:
	Calendario* agenda;
	string nombreDoc;
	int cedula;
public:
	Doctor(Calendario*, string, int);
	virtual ~Doctor();
	string getNombreDoc();
	int getCedula();
	Calendario* getAgenda();

	void setNombre(string);
	void setCedula(int);
	string toStringDoctor();

};
#endif
