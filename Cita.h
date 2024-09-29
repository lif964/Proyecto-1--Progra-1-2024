#ifndef CITA_H
#define CITA_H
#include <iostream>
#include <sstream>
#include <string>
#include "Especialidad.h"
#include "Dueno.h"
#include "Doctor.h"
using namespace std;


class Cita {
private:
	string diaSemana;
	int hora;
	Especialidad* esp;
	Dueno* dueno;
	Doctor* doc;
public:
	Cita(string, int, Especialidad*, Dueno*, Doctor*);
	virtual ~Cita();

	string getDiaSemana();
	int getHora();
	Especialidad* getEspecialidad();
	Dueno* getDueno();
	Doctor* getDoctor();

	void setDiaSemana(string);
	void setHora(int);

	string toStringCita();
};
#endif
