#ifndef CONTENEDORADUENO_H
#define CONTENEDORADUENO_H
#include "Dueno.h"
#include "ContenedoraMascota.h"
#include <iostream>
#include <sstream>
using namespace std;

class ContenedoraDueno {
private:
	Dueno** duenos;
	int cant;
	int tam;
public:
	ContenedoraDueno(int);
	virtual ~ContenedoraDueno();
	Dueno* getDueno(int);
	bool agregarDueno(Dueno*);
	bool ingresarDueno(string, int, string, int, ContenedoraMascota*);
	bool ingresarMascota(int, string, string, string, int, int, float);
	string mostrarDuenoConMascota();
};
#endif