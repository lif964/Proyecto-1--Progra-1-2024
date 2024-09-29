#ifndef CONTENEDORCITAS_H
#define CONTENEDORCITAS_H
#include "Cita.h"
#include <iostream>
#include <sstream>
using namespace std;

class ContenedorCitas {
private:
	Cita** citas;
	int tam;
	int cant;
public:
	ContenedorCitas(int);
	virtual ~ContenedorCitas();

	bool cancelacion(string, int, int);

	bool agregarCita(Cita* cita);
	bool encontrarCitaOcupada(string, int);

	string toStringCitas();
	string toStringPacientesXDoc(int);
	string citasPorMascota(string);
	string mostrarCitasXDueno(int, string);
};
#endif