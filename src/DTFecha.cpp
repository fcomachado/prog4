#include <iostream>
#include <string>
#include <sstream>
#include <DTFecha.h>

DTFecha::DTFecha() {}

DTFecha::DTFecha(int dia, int mes, int anio) {
    this->dia = dia;
    this->mes = mes;
    this->anio = anio;
}

DTFecha::DTFecha(&DTFecha fecha) {
    this->dia = fecha.getDia();
    this->mes = fecha.getMes();
    this->anio = fecha.getAnio();
}

int DTFecha::getDia() {
    return this->dia;
}

int DTFecha::getMes() {
    return this->mes;
}

int DTFecha::getAnio() {
    return this->anio
}