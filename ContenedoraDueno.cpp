#include "ContenedoraDueno.h"
using namespace std;

ContenedoraDueno::ContenedoraDueno(int n) {
	duenos = new Dueno * [n];
	cant = 0;
	tam = n;
	for (int i = 0; i < tam; i++)
		duenos[i] = NULL;
}

ContenedoraDueno:: ~ContenedoraDueno() {
	for (int i = 0; i < cant; i++)
		delete duenos[i];
	delete[]duenos;
}

Dueno* ContenedoraDueno::getDueno(int cedDueno) {
	for (int i = 0; i < cant; i++)
		if (duenos[i] != NULL && duenos[i]->getCedula() == cedDueno)
			return duenos[i];
	return NULL;
}

bool ContenedoraDueno::agregarDueno(Dueno* dueno) {
	if (cant < tam) {
		duenos[cant++] = dueno;
		return true;
	}
	return false;
}

bool ContenedoraDueno::ingresarDueno(string nombre, int cedula, string direccion, int tel, ContenedoraMascota* mascotas) {
	Dueno* dueno = new Dueno(nombre, cedula, direccion, tel, mascotas);
	agregarDueno(dueno);
	return true;
}

bool ContenedoraDueno::ingresarMascota(int cedDueno, string nom, string raza, string sexo, int tamanio, int edad, float peso) {
	Dueno* dueno = getDueno(cedDueno);
	if (dueno != NULL) {
		Mascota* mascota = new Mascota(nom, raza, sexo, tamanio, edad, peso);
		if (dueno->getMascotas()->agregarMascota(mascota)) {
			return true;
		}
	}
	return false;
}

string ContenedoraDueno::mostrarDuenoConMascota() {
	stringstream s;

	for (int i = 0; i < cant; i++)
		if (duenos[i] != NULL)
			s << duenos[i]->toStringDueno() << endl;

	return s.str();
}