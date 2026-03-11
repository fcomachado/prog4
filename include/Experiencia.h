#include <iostream>
#include <string>
#include <sstream>
#include <DTFecha.h>
#include <DTExpe.h>
#ifndef EXPERIENCIA_H
#define EXPERIENCIA_H

class Experiencia {
    private:
       std::string codigoReserva;
       std::string descripcion;
       int precioBase;
       DTFecha fecha;

    public:
        Experiencia();
        Experiencia(std::string, std::string, int, DTFecha);

        std::string getCodigoReserva();
        std::string getDescripcion();
        int getPrecioBase();
        DTFecha getFecha();

        DTExpe getDT();
        set<string> getTuristas();
        float calcularCosto();
       
        ~Experiencia();
}

#endif
