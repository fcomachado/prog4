#include <iostream>
#include <string>
#include <sstream>
#include <Experiencia.h>

Experiencia::Experiencia() {}

Experiencia::Experiencia(std::string codigoReserva, std::string descripcion, int precioBase, DTFecha fecha) {
    this->codigoReserva = codigoReserva;
    this->descripcion = descripcion;
    this->precioBase = precioBase;
    this->fecha = fecha;
}

void Experiencia::setCodigoReserva(std::string codigoReserva) {
    this->codigoReserva = codigoReserva;
}

void Experiencia::setDescripcion(std::string descripcion) {
    this->descripcion = descripcion;
}

void Experiencia::setPrecioBase(int precioBase) {
    this->precioBase = precioBase;
}

void Experiencia::setFecha(DTFecha fecha) {
    this->fecha = fecha;
}

void Experiencia::setTuristas(Turista* turista) {
    this->turistas = turista;
}

std::string Experiencia::getCodigoReserva() {
    return this->codigoReserva;
}

std::string Experiencia::getDescripcion() {
    return this->descripcion;
}

int Experiencia::getPrecioBase() {
    return this->precioBase;
}

DTFecha Experiencia::getFecha() {
    return this->fecha;
}

/*Turista* getTuristas() {
    return this->turistas;
}*/

DTExpe Experiencia::getDT() { 

}

/*DTExpe Experiencia::getDT() {
    std::string codigoReserva = this->getCodigoReserva();
    std::string descripcion = this->getDescripcion();
    DTFecha fecha = this->getFecha();
    Turista* turistas = this->getTuristas();
    DTExpe res = DTExpe(codigoReserva, descripcion, fecha, turistas);
    return res;
}*/

set<string> Experiencia::getTuristas() {

}

float Experiencia::calcularCosto() {

}
       
Experiencia::~Experiencia() {

}