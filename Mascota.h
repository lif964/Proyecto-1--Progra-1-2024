#ifndef MASCOTA_H
#define MASCOTA_H
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

class Mascota {
private:
	string nombre;
	string raza;
	string sexo;
	int tamano;
	int edad;
	float peso;
public:
	Mascota(string, string, string, int, int, float);
	virtual ~Mascota();

	string getNombreMascota();
	string getRaza();
	string getSexo();
	int getTamano();
	int getEdad();
	float getPeso();

	void setNombreMascota(string);
	void setRaza(string);
	void setSexo(string);
	void setTamano(int);
	void setEdad(int);
	void setPeso(float);

	string toStringMascota();

};
#endif
