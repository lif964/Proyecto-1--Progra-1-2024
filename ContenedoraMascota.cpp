#include "ContenedoraMascota.h"
using namespace std;

ContenedoraMascota::ContenedoraMascota(int n) {
	mascotas = new Mascota * [n];
	cant = 0;
	tam = n;
	for (int i = 0; i < tam; i++)
		mascotas[i] = NULL;
}
ContenedoraMascota :: ~ContenedoraMascota() {
	for (int i = 0; i < cant; i++)
		if (mascotas[i] != NULL)
			delete mascotas[i];
	delete[]mascotas;
}

bool ContenedoraMascota::agregarMascota(Mascota* mascota) {
	if (cant < tam) {
		if (mascota != NULL) {
			mascotas[cant++] = mascota;
			return true;
		}
	}
	return false;
}

bool ContenedoraMascota::ingresarMascota(string nombre, string raza, string sexo, int edad, int tamanio, float peso) {
	Mascota* mascota = new Mascota(nombre, raza, sexo, tamanio, edad, peso);
	agregarMascota(mascota);
	return true;
}

string ContenedoraMascota::toStringCM() {
	stringstream s;

	for (int i = 0; i < cant; i++) {
		if (mascotas[i] != NULL) {
			s << mascotas[i]->toStringMascota() << endl;
		}
	}
	return s.str();
}

Mascota* ContenedoraMascota::getMascota(string nomMascota) {
	for (int i = 0; i < cant; i++) {
		if (mascotas[i] != NULL && mascotas[i]->getNombreMascota() == nomMascota) {
			return mascotas[i];
		}
	}
	return NULL;
}