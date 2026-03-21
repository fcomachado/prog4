#include <list>
#include <map>
#include <string>
#include <set>
#include <iostream>

#include "include/Experiencia.h"
#include "include/Alojamiento.h"
#include "include/TourGuiado.h"
#include "include/EventoCultural.h"
#include "include/DTFecha.h"
#include "include/DTExpe.h"

//#include <../include/Turista.h>

using namespace std;


void linkTuristaExperiencia(std::string, std::string); //función auxiliar punto-G

std::list<Experiencia*> experiencias;	//lista de experiencias
std::map<std::string, Experiencia*> map_experiencias;

std::list<Turista*> turistas;	//lista de turistas
std::map<std::string, Turista*> map_turistas;

void coleccion_guardarExperiencia(Experiencia* exp){
	experiencias.push_back(exp);
	std::pair<std::string, Experiencia*> entry(exp->getCodigoReserva(), exp);
    map_experiencias.insert(entry);
}

void coleccion_eliminarExperiencia(Experiencia* exp){
	experiencias.remove(exp);
	map_experiencias.erase(exp->getCodigoReserva());
}

void coleccion_guardarTurista(Turista* tur){
	turistas.push_back(tur);
	std::pair<std::string, Turista*> entry(tur->getCi(), tur);
    map_turistas.insert(entry);
}

Turista* coleccion_getTurista(std::string ci){
	return map_turistas[ci];
}

Experiencia* coleccion_getExperiencia(std::string codigoReserva){
	return map_experiencias[codigoReserva];
}


void parte_a(){
	Alojamiento* alojamiento1 = new Alojamiento("Hotel Lindorf", AllInclusive, 5);
	alojamiento1->setCodigoReserva("ALX5489");
	alojamiento1->setDescripcion("Hotel moderno");
	alojamiento1->setPrecioBase(30);
	alojamiento1->setFecha(18,05,2020);
	coleccion_guardarExperiencia(alojamiento1);

	Alojamiento* alojamiento2 = new Alojamiento("Hotel SeaView", MediaPension, 15);
	alojamiento2->setCodigoReserva("ALJ4789");
	alojamiento2->setDescripcion("Todas las habitacions con vista al mar");
	alojamiento2->setPrecioBase(100);
	alojamiento2->setFecha(10,02,2025);
	coleccion_guardarExperiencia(alojamiento2);
}

void parte_b(){
	set<string> lugaresVisitados1;
	lugaresVisitados1.insert("Plaza Independencia");
	lugaresVisitados1.insert("Plaza Matriz");
	TourGuiado* tourGuiado1 = new TourGuiado("Paseos SA", lugaresVisitados1);
	tourGuiado1->setCodigoReserva("TGO4657");
	tourGuiado1->setDescripcion("Plazas de Montevideo");
	tourGuiado1->setPrecioBase(10);
	tourGuiado1->setFecha(29,8,2024);
	coleccion_guardarExperiencia(tourGuiado1);

	set<string> lugaresVisitados2;
	lugaresVisitados2.insert("Puerta de la Ciudadela");
	lugaresVisitados2.insert("Mausoleo");
	lugaresVisitados2.insert("Cabildo");
	lugaresVisitados2.insert("Palacio Salvo");
	TourGuiado* tourGuiado2 = new TourGuiado("Recorre", lugaresVisitados2);
	tourGuiado2->setCodigoReserva("TGR3257");
	tourGuiado2->setDescripcion("Puntos Emblematicos");
	tourGuiado2->setPrecioBase(5);
	tourGuiado2->setFecha(29,8,2024);
	coleccion_guardarExperiencia(tourGuiado2);
}

void parte_c(){
	EventoCultural* eventoCultural1 = new EventoCultural("Teatro Solis", true);
	eventoCultural1->setCodigoReserva("ECP1346");
	eventoCultural1->setDescripcion("Danza en el Solis");
	eventoCultural1->setPrecioBase(10);
	eventoCultural1->setFecha(29,10,2025);
	coleccion_guardarExperiencia(eventoCultural1);
}

void parte_d(){
	//cout << "Exp " << " tiene " << coleccion_getExperiencia("ALX5489")->getDT().getTuristas().size() << " turistas." << endl;
	//cout << (*coleccion_getExperiencia("ALX5489")->getDT().getTuristas().begin())->getNombre() << endl; (no esta linkeando turistas)

	cout << coleccion_getExperiencia("ALX5489")->getDT() << endl;
	cout << coleccion_getExperiencia("ALJ4789")->getDT() << endl;
	cout << coleccion_getExperiencia("TGO4657")->getDT() << endl;
	cout << coleccion_getExperiencia("TGR3257")->getDT() << endl;
	cout << coleccion_getExperiencia("ECP1346")->getDT() << endl;
	
	/*cout << "Prueba primer experiencia guardada (Alojamiento)" << endl;
	cout << coleccion_getExperiencia("ALX5489")->getCodigoReserva() << endl;
	cout << coleccion_getExperiencia("ALX5489")->getDescripcion() << endl;
	cout << coleccion_getExperiencia("ALX5489")->getPrecioBase() << endl;

	cout << "Prueba tercer experiencia guardada (Tour Guiado)" << endl;
	cout << coleccion_getExperiencia("TGO4657")->getCodigoReserva() << endl;
	cout << coleccion_getExperiencia("TGO4657")->getDescripcion() << endl;
	cout << coleccion_getExperiencia("TGO4657")->getPrecioBase() << endl;

	cout << "Prueba quinta experiencia guardada (Evento Cultural)" << endl;
	cout << coleccion_getExperiencia("ECP1346")->getCodigoReserva() << endl;
	cout << coleccion_getExperiencia("ECP1346")->getDescripcion() << endl;
	cout << coleccion_getExperiencia("ECP1346")->getPrecioBase() << endl;*/
}

void parte_e(){
	Turista* turista1 = new Turista("4.951.278-9", "Vanesa Castro", "vcastro.uy@servidor.net");
	coleccion_guardarTurista(turista1);

	Turista* turista2 = new Turista("1.535.442-0", "Karen Santos", "karen.s89@internet.uy");
	coleccion_guardarTurista(turista2);
}

void parte_f(){
	cout << coleccion_getTurista("4.951.278-9")->toString() << endl;
	cout << coleccion_getTurista("1.535.442-0")->toString() << endl;
}

//función auxiliar para parte-G
void linkTuristaExperiencia(std::string _turista, std::string _exp) {
	Experiencia* exp = coleccion_getExperiencia(_exp);
	Turista* turista = coleccion_getTurista(_turista);
	turista->agregarExperiencia(exp);
	exp->agregarTurista(turista);
} 

void parte_g(){
	linkTuristaExperiencia("4.951.278-9", "ALX5489");
	//linkTuristaExperiencia("1.535.442-0", "ALX5489"); //probe esto para ver si una experiencia logra tener dos turistas
	linkTuristaExperiencia("4.951.278-9", "ALJ4789");
	linkTuristaExperiencia("4.951.278-9", "TGR3257");
	linkTuristaExperiencia("4.951.278-9", "ECP1346");
	linkTuristaExperiencia("1.535.442-0", "TGO4657");
	linkTuristaExperiencia("1.535.442-0", "TGR3257");
	cout << "Exp TGR3257" << " tiene " << coleccion_getExperiencia("TGR3257")->getDT().getTuristas().size() << " turistas." << endl;
	cout << "Tur 4.951.278-9" << " tiene " << coleccion_getTurista("4.951.278-9")->getExperiencias().size() << " experiencias." << endl;
}

void parte_h(){
	Turista* turista1 = coleccion_getTurista("4.951.278-9");
	DTFecha fechaParteH = DTFecha(10, 12, 2023);
	set<string> listaExperiencias = (*turista1).listarExperiencias(fechaParteH, 0, 1000);
	//imprimo recorriendo el set
	for(set<string>::iterator it = listaExperiencias.begin(); it != listaExperiencias.end(); it++){
		cout << *it << endl;
	}
}

void parte_i(){
	Experiencia* aBorrar = coleccion_getExperiencia("TGR3257");
	coleccion_eliminarExperiencia(aBorrar);
}

void parte_j(){
	Turista* turista2 = coleccion_getTurista("1.535.442-0");
	DTFecha fechaParteJ =  DTFecha(10, 10, 2020);
	set<string> listaExperiencias = (*turista2).listarExperiencias(fechaParteJ, 0, 1000);
	//imprimo recorriendo el set
	for(set<string>::iterator it = listaExperiencias.begin(); it != listaExperiencias.end(); it++){
		cout << *it << endl;
	}
}

void parte_k(){
	cout << coleccion_getExperiencia("ALX5489")->getDT() << endl;
	cout << coleccion_getExperiencia("ALJ4789")->getDT() << endl;
	cout << coleccion_getExperiencia("TGO4657")->getDT() << endl;
	cout << coleccion_getExperiencia("ECP1346")->getDT() << endl;
}

void cleanUp(){
	//libero memoria de la lista de experiencias
	for (list<Experiencia*>::iterator it = experiencias.begin(); it != experiencias.end(); it++){
		delete *it;
	}

	//libero memoria de la lista de turistas
	for (list<Turista*>::iterator it = turistas.begin(); it != turistas.end(); it++){
		delete *it;
	}
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
