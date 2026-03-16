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
//devuelve true si fecha1 es posterior a fecha2
bool compararFechas(DTFecha fecha1, DTFecha fecha2){
    if (fecha1.getAnio() > fecha2.getAnio())
        return true;
    if (fecha1.getAnio() < fecha2.getAnio())
        return false;
    
    if (fecha1.getMes() > fecha2.getMes())
        return true;
    if (fecha1.getMes() < fecha2.getMes())
        return false;

    if (fecha1.getDia() > fecha2.getDia())
        return true;

    return false;
}