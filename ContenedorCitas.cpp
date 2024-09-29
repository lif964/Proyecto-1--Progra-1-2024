#include "ContenedorCitas.h"
using namespace std;

ContenedorCitas::ContenedorCitas(int n) {
	citas = new Cita * [n];
	cant = 0;
	tam = n;
	for (int i = 0; i < tam; i++)
		citas[i] = NULL;
}
ContenedorCitas:: ~ContenedorCitas() {
	for (int i = 0; i < cant; i++)
		delete citas[i];
	delete[]citas;
}

bool ContenedorCitas::cancelacion(string dia, int hora, int idDueno) {

	for (int i = 0; i < cant; i++) {
		Cita* cita = citas[i];
		if (cita != NULL && cita->getDueno()->getCedula() == idDueno && cita->getDiaSemana() == dia && cita->getHora() == hora) {
			citas[i] = NULL;
			delete cita;
			return true;
		}
	}
	return false;
}

bool ContenedorCitas::agregarCita(Cita* cita) {
	if (cant < tam) {
		citas[cant++] = cita;
		return true;
	}
	return false;
}

string ContenedorCitas::toStringCitas() {
	stringstream s;

	s << "----------CITAS----------" << endl;
	for (int i = 0; i < cant; i++) {
		if (citas[i] != NULL) {
			s << citas[i]->toStringCita() << endl;
		}
	}
	return s.str();
}

bool ContenedorCitas::encontrarCitaOcupada(string dia, int hora) {
	for (int i = 0; i < cant; i++) {
		if (citas[i] !=NULL && citas[i]->getDiaSemana() == dia && citas[i]->getHora()== hora) {
			return true;
		}
	}
	return false;
}

string ContenedorCitas::citasPorMascota(string nomMascota) {
	stringstream s;

	for(int i= 0; i<cant; i++)
		if (citas[i] != NULL && citas[i]->getDueno()->getMascotas()->getMascota(nomMascota))
			s << citas[i]->toStringCita() << endl;

	return s.str();
}

string ContenedorCitas::mostrarCitasXDueno(int id, string nomM) {
	stringstream s;

	bool duenoEncontrado = false;
	for (int i = 0; i < cant; i++) {
		if (citas[i] != NULL && citas[i]->getDueno()->getCedula() == id) {
			duenoEncontrado = true;

			s << "Mascotas de " << citas[i]->getDueno()->getNombreDueno() << endl;
			s << citas[i]->getDueno()->getMascotas()->toStringCM() << endl;
			s << "Seleccione la mascota de la cual desea ver las citas" << endl;

			Mascota* pet = citas[i]->getDueno()->getMascotas()->getMascota(nomM);

			if (pet != NULL) {
				s << "Citas registradas a nombre de " << pet->getNombreMascota() << "son: " << endl;
				s << citasPorMascota(nomM) << endl;
			}
			else {
				s << "No hay citas registradas para " << pet->getNombreMascota() << endl;
			}
		}
	}
	if (!duenoEncontrado) {
		cout << "No se encontro ningun dueño con esa identificacion " << endl;
	}

	return s.str ();
}

string ContenedorCitas::toStringPacientesXDoc(int cedDoctor) {
	stringstream s;

	s << "---------PACIENTES---------" << endl;
	for (int i = 0; i < cant; i++) {
		if (citas[i] != NULL) {
			if (citas[i]->getEspecialidad()->getContenedorDoctores()->getDoctor(cedDoctor)) {
				s << "Pacientes asignados al doctor "<< citas[i]->getEspecialidad()->getContenedorDoctores()->getDoctor(cedDoctor)->getNombreDoc()<< endl;
				s << citas[i]->getDueno()->getMascotas()->toStringCM();
			}
		}
	}
	return s.str();
}