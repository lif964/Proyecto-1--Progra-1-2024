#ifndef CONTENEDORDOCTORES_H
#define CONTENEDORDOCTORES_H
#include "Doctor.h"
#include "Calendario.h"
#include <iostream>
#include <sstream>
using namespace std;

class ContenedorDoctores {
private:
	Doctor** doctores;
	int tam;
	int cant;
public:
	ContenedorDoctores(int);
	virtual ~ContenedorDoctores();

	Doctor* getDoctor(int);

	bool agregarDoc(Doctor*);
	bool ingresarDoctor(Calendario*, string, int);

	string toStringDocs();
};
#endif