#include <iostream>
//#include <ostream>
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
        std::list<std::string> turistas; //lista de nombres de los turistas
        //std::list<Turista*> turistas; //idea original
    
    public:

        DTExpe();
        DTExpe(std::string codigoReserva, std::string descripcion, DTFecha fecha, std::list<std::string> turistas);

        string getCodigoReserva();
        string getDescripcion();
        DTFecha getFecha();
        std::list<Turista*> getTuristas();

        std::ostream &operator<<(std::ostream &,DTExpe);
};

#endif
