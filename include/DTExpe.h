#include <iostream>
#include <sstream>
#include <string>
#include <list>
#include "DTFecha.h"
#ifndef DTEXPE_H
#define DTEXPE_H

class Turista;

class DTExpe {
    private:
        std::string codigoReserva;
        std::string descripcion;
        DTFecha fecha;
        std::list<Turista*> turistas; //lista de punteros a turista
    
    public:

        DTExpe();
        DTExpe(std::string codigoReserva, std::string descripcion, DTFecha fecha, Turista* turistas);

        string getCodigoReserva();
        string getDescripcion();
        DTFecha getFecha();
        std::list<Turista*> getTuristas();
};

#endif
