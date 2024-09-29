#include "Mascota.h"

Mascota::Mascota(string nom, string r, string s, int tam, int ed, float p) 
	:nombre(nom), raza(r), sexo(s), tamano(tam), edad(ed), peso(p) {
}
Mascota:: ~Mascota() {

}

string Mascota::getNombreMascota() {return nombre;}
string Mascota::getRaza() { return raza; }
string Mascota::getSexo() { return sexo; }
int Mascota::getTamano() { return tamano; }
int Mascota::getEdad() { return edad; }
float Mascota::getPeso() { return peso; }

void Mascota::setNombreMascota(string nom) { nombre = nom; }
void Mascota::setRaza(string r) { raza = r; }
void Mascota::setSexo(string s) { sexo = s; }
void Mascota::setTamano(int tam) { tamano = tam;}
void Mascota::setEdad(int ed) { edad = ed; }
void Mascota::setPeso(float p) { peso = p; }

string Mascota::toStringMascota() {
	stringstream s;

	s << "----------DATOS DE LA MASCOTA----------" << endl;
	s << "NOMBRE DE LA MASCOTA: " << nombre << endl;
	s << "SEXO: " << sexo << endl;
	s << "EDAD: " << edad << endl;
	s << "TAMANO: " << tamano << endl;
	s << "PESO: " << peso << endl;

	return s.str();
}