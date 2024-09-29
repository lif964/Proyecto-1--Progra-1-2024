#include "InterfazHospital.h"
using namespace std;

InterfazHospital::InterfazHospital() {
	hospitalVet = new Hospital();
}

void InterfazHospital::MenuPrincipal() {
	int opcion = 1;

	while (opcion != 0) {

		cout << "----------HOSPITAL VETERINARIO UNIVERSIDAD NACIONAL----------" << endl;
		cout << endl;
		cout << "---MENU PRINCIPAL---" << endl;
		cout << "1-Submenu Administracion" << endl;
		cout << "2-Submenu Control de Citas" << endl;
		cout << "3-Submenu Busquedas y Listados" << endl;
		cout << "Seleccione una opcion: " << endl;
		cin >> opcion;

		switch (opcion) {
		case 1:
			system("cls");
			opcion1();
			break;
		case 2:
			system("cls");
			opcion2();
			break;
		case 3:
			system("cls");
			opcion3();
			break;
		default:
			cout << "Opcion incorrecta  ";
			break;
		}

		system("cls");
	}
	exit(0);
	system("cls");
}

void InterfazHospital::opcion1() {
	int op1 = 1;
	while (op1 != 0) {
		system("CLS");
		cout << "---------------------------(1) SUBMENU ADMINISTRACION---------------------------" << endl;
		cout << "(1) Ingresar Especialidades" << endl;
		cout << "(2) Ingresar Doctor" << endl;
		cout << "(3) Ingresar Dueno" << endl;
		cout << "(4) Ingresar Mascota(por Dueno)" << endl;
		cout << "(5) Regresar al Menu Principal" << endl;
		cout << "Seleccione una opcion: " << endl;
		cin >> op1;

		switch (op1) {
		case 1: {
			ingresarEsp();
		}break;
		case 2: {
			ingresarDoc();
		}break;
		case 3: {
			system("cls");
			ingresarDueno();
		}break;
		case 4: {
			system("cls");
			ingresarMascota();
		}break;
		case 5: {
			system("cls");
			cout << "Regresando al Menu Principal...." << endl;
			system("pause");
			MenuPrincipal();
		}break;
		}
	}
	exit(0);
	system("cls");
}

void InterfazHospital::ingresarEsp() {
	cout << "------------(1) Ingresar Especialidad--------------" << endl;
	ContenedorDoctores* doctores = new ContenedorDoctores(40);
	string especialidad;

	cout << "Ingrese el nombre de la especialidad que desea registrar: " << endl;
	cin.ignore();
	getline(cin, especialidad);

	Especialidad* specialty = hospitalVet->getEspecialidad()->getEspecialidad(especialidad);
	if (specialty) {
		cout << "Ya esta especialidad se encuentra registrada" << endl;
	}
	else {
		hospitalVet->getEspecialidad()->ingresarEspecialidad(especialidad, doctores);
		cout << "Especialidad ingresada correctamente" << endl;
	}
	delete doctores;

	cin.get();
}

void InterfazHospital::ingresarDoc() {
	cout << "------------(2) Ingresar Doctor------------" << endl;
	Calendario* agenda = new Calendario();
	int cedDoc;
	string nomDoc;
	cout << "Ingrese el nombre del doctor: " << endl;
	cin.ignore();
	getline(cin, nomDoc);
	cout << "Ingrese el numero de cedula: " << endl;
	cin >> cedDoc;
	cout << hospitalVet->getEspecialidad()->toStringEspecialidades() << endl;
	string esp;
	cout << "Ingrese la especialidad a la cual pertenece el doctor: " << endl;
	cin.ignore();
	getline(cin, esp);
	if (!hospitalVet->getEspecialidad()->getEspecialidad(esp)) {
		cout << "La especialidad ingresada no existe" << endl;
		delete agenda;
		return;
	}
	bool doctorIngresado = hospitalVet->getEspecialidad()->ingresarDoctor(esp, agenda, nomDoc, cedDoc);
	if (doctorIngresado) {
		cout << "Doctor ingresado correctamente" << endl;
	}
	else {
		cout << "No se logro ingresar el doctor: " << endl;
	}

	delete agenda;
}

void InterfazHospital::ingresarDueno() {
	cout << "------------(3) Ingresar Dueno------------" << endl;
	string nomDue, direccion;
	int cedDueno, telefono;
	ContenedoraMascota* mascotas = new ContenedoraMascota(10);
	cout << "Ingrese su nombre: " << endl;
	cin >> nomDue;
	cout << "Ingrese su cedula: " << endl;
	cin >> cedDueno;
	cout << "Ingrese su numero telefonico: " << endl;
	cin >> telefono;
	cout << "Ingrese su direccion: " << endl;
	cin >> direccion;

	Dueno* due = hospitalVet->getDueno()->getDueno(cedDueno);
	if (due) {
		cout << "Y existe un dueno con este numero de cedula" << endl;
	}
	else {
		hospitalVet->getDueno()->ingresarDueno(nomDue, cedDueno, direccion, telefono, mascotas);
		cout << "Dueno ingresado correctamente" << endl;
	}

	delete mascotas;
}

void InterfazHospital::ingresarMascota() {
	cout << "------------(4) Ingresar Mascota(por Dueno)------------" << endl;
	string nomM, raza, sexo;
	int tamano, edad, cedDueno;
	float peso;
	cout << "Ingrese su numero de cedula: " << endl;
	cin >> cedDueno;
	cout << "Ingrese el nombre de la mascota que va a ingresar: " << endl;
	cin >> nomM;
	cout << "Ingrese la raza de su mascota: " << endl;
	cin >> raza;
	cout << "Ingrese el genero de su mascota: " << endl;
	cin >> sexo;
	cout << "Ingrese la edad de su mascota: " << endl;
	cin >> edad;
	cout << "Ingrese el tamano de mascota(1:peq, 2:med, 3:grande):" << endl;
	cin >> tamano;
	cout << "Ingrese el peso de su mascota: " << endl;
	cin >> peso;

	Dueno* due = hospitalVet->getDueno()->getDueno(cedDueno);
	if (due) {
		hospitalVet->getDueno()->ingresarMascota(cedDueno, nomM, raza, sexo, tamano, edad, peso);
		cout << "La mascota se a ingresado correctamente" << endl;
	}
	else {
		cout << "No se ha logrado ingresar la mascota" << endl;
	}

}


void InterfazHospital::opcion2() {
	int op2 = 1;
	while (op2 != 0) {
		system("CLS");

		cout << "----------SUBMENU CONTROL DE CITAS----------" << endl;
		cout << "(1) Sacar Citas" << endl;
		cout << "(2) Cancelar Cita" << endl;
		cout << "(3) Mostrar Calendario de Citas por Doctor" << endl;
		cout << "(4) Mostrar Citas Por Dueño" << endl;
		cout << "(5) Regresar al Menu Principal" << endl;
		cout << "Seleccione una opcion: " << endl;
		cin >> op2;

		switch (op2) {
		case 1: {
			system("cls");
			sacarCita();
		}break;
		case 2: {
			system("cls");
			cancelarCita();
		}break;
		case 3: {
			system("cls");
			cout << "------------(3) Mostrar Calendario de Citas por Doctor------------" << endl;
		}break;
		case 4: {
			system("cls");
			cout << "------------(4) Mostrar Citas Por Dueño------------" << endl;
		}break;
		case 5: {
			system("cls");
			cout << "Regresando al Menu Principal...." << endl;
			system("pause");
			MenuPrincipal();
		}break;
		}
	}
}

void InterfazHospital::guardarCita(string dia, int hora, Especialidad* especialidad, Dueno* dueno, Doctor* doctor) {
	Cita* nuevaCita = new Cita(dia, hora, especialidad, dueno, doctor);
	if (hospitalVet->getCita()->agregarCita(nuevaCita)) {
		cout << "Su cita a sido guardada correctamente" << endl;
	}
	else {
		cout << "No se logro guardar la cita" << endl;
		delete nuevaCita;
	}
}

void InterfazHospital::sacarCita() {
	int idDueno, idDoctor, hora;
	string nomPaciente, especialidad, dia;

	cout << "------------(1) Sacar Cita------------" << endl;

	cout << "Ingrese su numero de identificacion: " << endl;
	cin >> idDueno;
	Dueno* dueno = hospitalVet->getDueno()->getDueno(idDueno);
	if (dueno) {
		cout << dueno->getMascotas()->toStringCM();
	}
	else {
		cout << "No se encontro ningun dueno con esa identificacion" << endl;
	}

	cout << endl;
	cout << "Ingrese el nombre del paciente: " << endl;
	cin >> nomPaciente;

	cout << hospitalVet->getEspecialidad()->toStringEspecialidades() << endl;
	cout << "Ingrese la especialidad que desee:" << endl;
	cin >> especialidad;

	Especialidad* specialty = hospitalVet->getEspecialidad()->getEspecialidad(especialidad);
	if (!specialty) {
		cout << "No se encontro ninguna especialidad" << endl;
	}

	cout << endl;
	cout << specialty->getContenedorDoctores()->toStringDocs() << endl;
	cout << "Ingrese la identificacion del doctor que desea: " << endl;
	cin >> idDoctor;

	Doctor* doc = specialty->getContenedorDoctores()->getDoctor(idDoctor);
	if (doc) {
		system("CLS");
		cout << "Informacion del doctor elegido: " << doc->toStringDoctor();
	}
	else {
		cout << "No se encontro ningun doctor con esa identifiacion." << endl;
	}

	cout << "Ingrese un dia de la semana en la cual ocupa su cita -> LUNES, MARTES, MIERCOLES, JUEVES, VIERNES, SABADO: " << endl;
	cin >> dia;
	cout << "Ingrese la hora deseada para su cita entre las 8:00am y las 19:00hrs (7pm): " << endl;
	cin >> hora;

	if (specialty && dueno) {
		guardarCita(dia, hora, specialty, dueno, doc);
	}
	else {
		cout << "No se logro encontrar ninguna especialidad o dueno" << endl;
	}

}

void InterfazHospital::cancelarCita() {
	int idDueno, idDoctor, hora;
	string nomPaciente, especialidad, diaCita;

	cout << "------------(2) Cancelar Cita------------" << endl;

	cout << "Ingrese su numero de identificacion: ";
	cin >> idDueno;
	Dueno* dueno = hospitalVet->getDueno()->getDueno(idDueno);
	if (!dueno) {
		cout << "No se encontro ningun dueno con esa identificacion" << endl;
	}

	cout << hospitalVet->getEspecialidad()->toStringEspecialidades();

	cout << "Ingrese la especialidad en la cual tiene la cita que desea cancelar: " << endl;
	cin >> especialidad;

	Especialidad* specialty = hospitalVet->getEspecialidad()->getEspecialidad(especialidad);
	if (!specialty) {
		cout << "No se encontro ninguna especialidad" << endl;
	}

	cout << specialty->getContenedorDoctores()->toStringDocs() << endl;
	cout << "Ingrese la identificacion del doctor con el cual tiene su cita: " << endl;
	cin >> idDoctor;

	cout << hospitalVet->getCita()->toStringPacientesXDoc(idDoctor) << endl;

	cout << "Ingrese el nombre del paciente del cual desea cancelar la cita: ";
	cin >> nomPaciente;

	cout << "Información de las citas del paciente " << nomPaciente << " :";
	cout << hospitalVet->getCita()->citasPorMascota(nomPaciente);

	cout << "Ingrese el dia de la cita de la cual desea cancelar:";
	cin >> diaCita;

	cout << "Ingrese la hora de la cita de la cual desea cancelar:";
	cin >> hora;

	if (hospitalVet->getCita()->cancelacion(diaCita, hora, idDueno)) {
		cout << "Cita cancelada exitosamente" << endl;
	}
	else {
		cout << "No se encontro una cita para cancelar" << endl;
	}
}




void InterfazHospital::opcion3() {
	int op3 = 1;
	while (op3 != 0) {
		system("CLS");

		cout << "---------BUSQUEDA Y LISTADOS---------" << endl;
		cout << "(1) Mostrar Listado de Especialidades" << endl;
		cout << "(2) Mostrar Listado de Doctores por Especialidad" << endl;
		cout << "(3) Mostrar Duenño con sus Mascotas" << endl;
		cout << "(4) Mostrar Pacientes por Doctor" << endl;
		cout << "(5) Regresar al Menu Principal" << endl;
		cout << "Seleccione una opcion: " << endl;
		cin >> op3;

		switch (op3) {
		case 1: {
			system("cls");
			cout << "------------(1) Mostrar Listado de Especialidades------------" << endl;
		}break;
		case 2: {
			system("cls");
			cout << "------------(2) Mostrar Listado de Doctores por Especialidad------------" << endl;
		}break;
		case 3: {
			system("cls");
			cout << "------------(3) Mostrar Duenño con sus Mascotas------------" << endl;
		}break;
		case 4: {
			system("cls");
			cout << "------------(4) Mostrar Pacientes por Doctor------------" << endl;
		}break;
		case 5: {
			system("cls");
			cout << "Regresando al Menu Principal...." << endl;
			system("pause");
			MenuPrincipal();
		}break;
		}
	}
}


