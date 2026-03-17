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

void Experiencia::setFecha(int dia, int mes, int anio) {
    DTFecha* fecha = new DTFecha(dia, mes, anio);
    this->fecha = fecha;
} //aca estamos usando memoria, hay que liberarla

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


DTExpe Experiencia::getDT() { 
    std::string codigoReserva = this->getCodigoReserva();
    std::string descripcion = this->getDescripcion();
    DTFecha fecha = this->getFecha();
    std::list<Turista*> turistas = this->getTuristas(); // esta bien?
    DTExpe* res = new DTExpe(codigoReserva, descripcion, fecha, turistas); 
    return res; 
}


std::list<Truista*> Experiencia::getTuristas() {
    return this->turistas;
}

/*float Experiencia::calcularCosto() {

}*/ //no tiene implementacion aca
       
Experiencia::~Experiencia() {

}