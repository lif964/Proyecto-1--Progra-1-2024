#include "Hospital.h"
using namespace std;


Hospital::Hospital() 
	:citas(NULL), especialidades(NULL), duenos(NULL){
}
Hospital::Hospital(ContenedorCitas* c, ContenedoraEspecialidad* e, ContenedoraDueno* d) 
	:citas(c), especialidades(e), duenos(d) {
}
Hospital::~Hospital() {
	delete citas;
	delete especialidades;
	delete duenos;
}
ContenedorCitas* Hospital::getCita(){
	return citas;
}
ContenedoraEspecialidad* Hospital::getEspecialidad(){
	return especialidades;
}
ContenedoraDueno* Hospital::getDueno(){
	return duenos;
}