#include <set>
#include <string>
#include <iostream>
#include <sstream>
#include <Experiencia.h>
#include <TourGuiado.h>
using namespace std;

//TourGuiado();

TourGuiado::TourGuiado(string agen, set<string> lugaresVisit){
    agencia = agen;
    lugaresVisitados = lugaresVisit;
}

string TourGuiado::getAgencia(){
    return agencia;
}

set<string> TourGuiado::getLugaresVisitados(){
    return lugaresVisitados;
}

void TourGuiado::setAgencia(string agenc){
    agencia = agenc;
}

void TourGuiado::setLugaresVisitados(set<string> lugaresVisitad){
    lugaresVisitados = lugaresVisitad;
}

float TourGuiado::calcularCosto(){
    int precBase = getPrecioBase();
    set<string> conjuntoTuristas = getTuristas();
    int cantidadTuristas = conjuntoTuristas.size();
    int cantLugaresVisitados = lugaresVisitados.size();
    
    float resultado = (precBase + 2) * cantLugaresVisitados * cantidadTuristas;
    return resultado;
}

//~TourGuiado();