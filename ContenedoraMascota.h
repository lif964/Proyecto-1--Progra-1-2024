#ifndef CONTENEDORAMASCOTA_H
#define CONTENEDORAMASCOTA_H
#include "Mascota.h"
using namespace std;

class ContenedoraMascota {
private:
	Mascota** mascotas;
	int tam;
	int cant;
public:
	ContenedoraMascota(int);
	virtual ~ContenedoraMascota();
	bool agregarMascota(Mascota* mascota);
	bool ingresarMascota(string, string, string, int, int, float);
	string toStringCM();
	Mascota* getMascota(string);
};
#endif
