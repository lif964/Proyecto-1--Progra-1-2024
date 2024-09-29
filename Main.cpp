#include <iostream>
#include <sstream>
#include <string>
#include "Hospital.h"
#include "InterfazHospital.h"
using namespace std;

int main() {

	/*´Prueba de metodos:*/

	//Mascota* m1 = new Mascota("bola", "poodle", "masculino", 45, 2, 23);
	//Mascota* m2 = new Mascota("bolita", "dooberman", "femenino", 76, 4, 13);
	//Mascota* m3 = new Mascota("snow", "salchicha", "masculino", 56, 5, 50);
	//Mascota* m4 = new Mascota("moe", "zaguate", "femenino", 89, 6, 20);

	//ContenedoraMascota* COM = new ContenedoraMascota(10);
	//ContenedoraMascota* COM2 = new ContenedoraMascota(10);
	//ContenedoraMascota* COM3 = new ContenedoraMascota(10);
	//ContenedoraMascota* COM4 = new ContenedoraMascota(10);

	//COM->agregarMascota(m1);
	//COM2->agregarMascota(m2);
	//COM3->agregarMascota(m3);
	//COM4->agregarMascota(m4);

	//Dueno* d1 = new Dueno("Josue", 29489, "75m bar la estrella", 98231, COM);
	//Dueno* d2 = new Dueno("Mariana", 10800, "175m noroeste del mar", 98292, COM2);
	//Dueno* d3 = new Dueno("Mariano", 70939, "izquierda del palo de mango", 481, COM3);
	//Dueno* d4 = new Dueno("Josefina", 60509, "granda mc donald", 2793479, COM4);

	//ContenedoraDueno* CODU = new ContenedoraDueno(10);
	//CODU->agregarDueno(d1);
	//CODU->agregarDueno(d2);
	//CODU->agregarDueno(d3);
	//CODU->agregarDueno(d4);

	///*cout << CODU->mostrarDuenoConMascota() << endl;*/

	//Calendario* agenda1 = new Calendario();
	//Calendario* agenda2 = new Calendario();
	//Calendario* agenda3 = new Calendario();
	//Calendario* agenda4 = new Calendario();
	//Calendario* agenda5 = new Calendario();
	//Calendario* agenda6 = new Calendario();

	//Doctor* doc1 = new Doctor(agenda1,"Jose Daniel", 209480392);
	//Doctor* doc2 = new Doctor(agenda2,"Roberto", 203948308);
	//Doctor* doc3 = new Doctor(agenda3, "Marta", 438472032);
	//Doctor* doc4 = new Doctor(agenda4, "Martin", 902394813);
	//Doctor* doc5 = new Doctor(agenda5, "Paola", 438472032);
	//Doctor* doc6 = new Doctor(agenda6, "Suarez", 902394813);

	//ContenedorDoctores* COD = new ContenedorDoctores(200);
	//ContenedorDoctores* COD2 = new ContenedorDoctores(200);
	//ContenedorDoctores* COD3 = new ContenedorDoctores(200);

	//COD->agregarDoc(doc1);
	//COD->agregarDoc(doc2);
	//COD->agregarDoc(doc3);
	//COD->agregarDoc(doc4);
	//COD3->agregarDoc(doc5);
	//COD3->agregarDoc(doc6);

	//Especialidad* esp1 = new Especialidad("Oncologia", COD);
	//Especialidad* esp2 = new Especialidad("Medicina General", COD);
	//Especialidad* esp3 = new Especialidad("Dentista", COD);

	//ContenedoraEspecialidad* COE = new ContenedoraEspecialidad(100);

	//COE->agregarEspecialidad(esp1);
	//COE->agregarEspecialidad(esp2);
	//COE->agregarEspecialidad(esp3);

	/*cout << esp3->toStringEspecialidad() << endl;

	cout << COE->DoctorXEspecialidad() << endl;
	cout << endl;
	cout << COE->toStringEspecialidades() << endl;*/


	/*Cita* c1 = new Cita("Lunes", 8, esp1, d1);
	Cita* c2 = new Cita("Martes", 14, esp2, d2);
	Cita* c3 = new Cita("Miercoles", 16, esp3, d3);
	Cita* c4 = new Cita("Jueves", 10, esp1, d4);*/

	/*cout << c1->toStringCita() << endl;
	cout << c2->toStringCita() << endl;
	cout << c3->toStringCita() << endl;
	cout << c4->toStringCita() << endl;*/

	/*ContenedorCitas* COC = new ContenedorCitas(10);

	 COC->agregarCita(c1);
	 COC->agregarCita(c2);
	 COC->agregarCita(c3);
	 COC->agregarCita(c4);*/

	Hospital* hospi = new Hospital();
	InterfazHospital interfaz;
	interfaz.MenuPrincipal();

	/*string nomMascota;
	cout << "Ingrese el nombre de la mascota" << endl;
	cin >> nomMascota;*/
	//cout << COC->citasPorMascota(nomMascota) << endl;
	/*cout << endl;*/
	/*int id;
	cout << "Ingrese su numero de cedula: " << endl;
	cin >> id;
	cout << COC->mostrarCitasXDueno(id);*/
	/*int cedDoc;
	cout << "Ingrese la cedula del doctor: " << endl;
	cin >> cedDoc;
	cout << COC->toStringPacientesXDoc(cedDoc);*/

	/*cout << COC->toStringCitas() << endl;*/

	/*string nom;
	//cout << "Ingrese el nombre de la mascota: ";
	cin >> nom;

	string raza;
	cout << "Ingrese la raza de la mascota: ";
	cin >> raza;

	string sex;
	cout << "Ingrese el sexo de la mascota: ";
	cin >> sex;

	int tamano;
	cout << "Ingrese el tamano de la mascota (1:pequeño, 2:mediano, 3:grande):";
	cin >> tamano;

	int edad;
	cout << "Ingrese la eddad de la mascota:";
	cin >> edad;

	float peso;
	cout << "Ingrese el peso de la mascota: " << endl;
	cin >> peso;

	cout<<COM->ingresarMascota(nom, raza, sex, tamano, edad, peso)<<endl;*/


	/*cout << d1->toStringDueno() << endl;*/

	/*cout << endl;*/

	//string nombreDoc;
	//cout << "Ingrese el nombre del doctor:";
	//cin >> nombreDoc;

	//int cedDoc;
	//cout << "Ingrese la cedula del doctor: ";
	//cin >> cedDoc;

	/*cout << endl;*/
	/*cout << doc5->getAgenda()->verificarCita(0, 8) << endl;
	cout << doc5->getAgenda()->verificarCita(1, 9) << endl;
	cout << doc5->getAgenda()->verificarCita(2, 10) << endl;
	cout << doc6->getAgenda()->verificarCita(3, 11) << endl;
	cout << doc6->getAgenda()->verificarCita(4, 12) << endl;
	cout << doc6->getAgenda()->verificarCita(5, 13) << endl;

	cout << doc5->toStringDoctor() << endl;
	cout << doc6->toStringDoctor() << endl;*/
	/*cout << COD->ingresarDoctor(agenda3, nombreDoc, cedDoc) << endl;*/

	/*int dia;
	cout << "Ingrese el dia en el cual desea su cita(0:Lunes a 5:Sabado): " << endl;
	cin >> dia;

	int hora;
	cout << "Ingrese la hora en la cual desea su cita [horario: 8am-19pm(7pm)]:" << endl;
	cin >> hora;

	cout << agenda3->verificarCita(dia, hora)<<endl;*/
	/*cout << agenda3->verificarCita(3, 5) << endl;
	cout << agenda3->verificarCita(6, 19) << endl;
	cout << agenda3->verificarCita(2, 4) << endl;*/

	/*cout << COD->getDoctor(cedDoc)->getAgenda()->toStringAgenda() << endl;*/

	return 0;
}