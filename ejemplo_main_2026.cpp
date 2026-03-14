/*
#include <iostream>
#include <list>
#include <map>
*/
#include <Turista.h>
#include <string>
#include <set>
using namespace std;


void linkTuristaExperiencia(std::string, std::string); //función auxiliar punto-G
/*
std::list<Experiencia*> experiencias;
std::map<std::string, Experiencia*> map_experiencias;

std::list<Turista*> turistas;
std::map<std::string, Turista*> map_turistas;

void coleccion_guardarExperiencia(Experiencia* exp){
	experiencias.push_back(exp);
	std::pair<std::string, Experiencia*> entry(exp->getCodigoReserva(), exp);
    map_experiencias.insert(entry);
}
*/
void coleccion_eliminarExperiencia(Experiencia* exp){
	experiencias.remove(exp);
	map_experiencias.erase(exp->getCodigoReserva());
}
/*
void coleccion_guardarTurista(Turista* tur){
	turistas.push_back(tur);
	std::pair<std::string, Turista*> entry(tur->getCi(), tur);
    map_turistas.insert(entry);
}
*/
Turista* coleccion_getTurista(std::string ci){
	return map_turistas[ci];
}

Experiencia* coleccion_getExperiencia(std::string codigoReserva){
	return map_experiencias[codigoReserva];
}
/*

void parte_a(){
}

void parte_b(){
}

void parte_c(){
}

void parte_d(){
}

void parte_e(){
}

void parte_f(){
}
*/
//función auxiliar para parte-G
void linkTuristaExperiencia(std::string _turista, std::string _exp) {
	Experiencia* exp = coleccion_getExperiencia(_exp);
	Turista* turista = coleccion_getTurista(_turista);
	turista->agregarExperiencia(exp);
	exp->setTurista(turista);
}
void parte_g(){
	linkTuristaExperiencia("4.951.278-9", "ALX5489");
	linkTuristaExperiencia("4.951.278-9", "ALJ4789");
	linkTuristaExperiencia("4.951.278-9", "TGR3257");
	linkTuristaExperiencia("4.951.278-9", "ECP1346");
	linkTuristaExperiencia("1.535.442-0", "TGO4657");
	linkTuristaExperiencia("1.535.442-0", "TGR3257");
}

void parte_h(){
	Turista* turista = coleccion_getTurista(4.951.278-9);
	set<string> listaExperiencias = (*turista).listarExperiencias(10/12/2023, 0, 1000);
	//imprimo recorriendo el set
	for(set<string>::iteretor it = listaExperiencias.begin(), it != listaExperiencias.end(), it++){
		cout << *it << endl;
	}
}

void parte_i(){
	Experiencia* aBorrar = coleccion_getExperiencia(TGR3257);
	coleccion_eliminarExperiencia(aBorrar);
}

void parte_j(){
	Turista* turista = coleccion_getTurista(1.535.442-0);
	set<string> listaExperiencias = (*turista).listarExperiencias(10/10/2020, 0, 1000);
	//imprimo recorriendo el set
	for(set<string>::iteretor it = listaExperiencias.begin(), it != listaExperiencias.end(), it++){
		cout << *it << endl;
	}
}

/*
void parte_k(){
}

void cleanUp(){
}

int main() {
	std::cout << "parte_a" <<  std::endl;
	parte_a();
	std::cout << "parte_b" <<  std::endl;
	parte_b();
	std::cout << "parte_c" <<  std::endl;
	parte_c();
	std::cout << "parte_d" <<  std::endl;
	parte_d();
	std::cout << "parte_e" <<  std::endl;
	parte_e();
	std::cout << "parte_f" <<  std::endl;
	parte_f();
	std::cout << "parte_g" <<  std::endl;
	parte_g();
	std::cout << "parte_h" <<  std::endl;
	parte_h();
	std::cout << "parte_i" <<  std::endl;
	parte_i();
	std::cout << "parte_j" <<  std::endl;
	parte_j();
	std::cout << "parte_k" <<  std::endl;
	parte_k();
	std::cout << "cleanUp" <<  std::endl;
	cleanUp();
	std::cout << "fin" <<  std::endl;

	return 0;
}
*/