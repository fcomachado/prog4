#include <iostream>
#include <string>
#include <sstream>
#include <DTFecha.h>
#include <DTExpe.h>
#ifndef EXPERIENCIA_h
#define EXPERIENCIA_h

class Experiencia {
    private:
       string codigoReserva;
       string descripcion;
       int precioBase;
       DTFecha fecha;

    public:

        DTExpe getDT();
        float calcularCosto();
       
}

#endif
