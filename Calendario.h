#ifndef CALENDARIO_H
#define CALENDARIO_H
#include <iostream>
#include <sstream>
using namespace std;

class Calendario {
private:
	string dias[72];
public:
	Calendario();
	virtual ~Calendario();

	string verificarCita(int dia, int hora);
	string toStringAgenda();
};
#endif
