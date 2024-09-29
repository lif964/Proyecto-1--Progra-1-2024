#include "Calendario.h"
#include <string>
using namespace std;

Calendario::Calendario() {
	for (int i = 0; i < 72; i++) {
		dias[i] = "  Libre ";
	}
}
Calendario:: ~Calendario() {

}

string Calendario::verificarCita(int dia, int hora) {
	stringstream s;

	if (dia < 0 || dia >5) {
		s << "No se logro agregar la cita. Dia invalido. Ingrese un dia entre 0(Lunes) y 5(Sabado)" << endl;
	}
	else {
		if (hora < 8 || hora>19) {
			s << "No se logro agregar la cita. Hora invalida. Ingrese una hora entre 8am y 19pm(7pm)" << endl;
		}
		else {
			int indice = dia * 12 + (hora - 8);

			if (dias[indice] == "Ocupado") {
				s << "Esta hora ya se encuentra ocupada" << endl;
			}
			else {
				dias[indice] = "Ocupado";
				s << "Cita agregada exitosamente" << endl;
			}
		}
	}

	return s.str();
}

string Calendario::toStringAgenda() {
	stringstream s;

	s << "--------------AGENDA---------------" << endl;
	s << "    DIA      8:00    9:00     10:00     11:00    12:00     1:00     2:00     3:00     4:00     5:00     6:00     7:00 ";

	s << endl;

	string diasNombres[6] = { "   Lunes |", "  Martes |", "Miercoles|", "  Jueves |", "  Friday |", "  Sabado |" };

	for (int dia = 0; dia < 6; dia++) {
		s << diasNombres[dia] << " ";
		for (int hora = 8; hora <= 19; hora++) {
			int indice = dia * 12 + (hora - 8);
			s << dias[indice] << " ";
		}
		s << endl;
	}


	return s.str();
}
