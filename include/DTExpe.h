#include <iostream>
#include <ostream>
#include <sstream>
#include <string>
#include <list>
#include "DTFecha.h"
#include "Turista.h"
#ifndef DTEXPE_H
#define DTEXPE_H

class Turista;

class DTExpe {
    private:
        std::string codigoReserva;
        std::string descripcion;
        DTFecha fecha;
        //std::list<std::string> turistas; //lista de nombres de los turistas
        std::list<Turista*> turistas; //idea original
    
    public:
        DTExpe();
        DTExpe(std::string codigoReserva, std::string descripcion, DTFecha fecha, std::list<Turista*> turistas);
        DTExpe(const DTExpe &);

        std::string getCodigoReserva() const;
        std::string getDescripcion() const;
        DTFecha getFecha() const;
        std::list<Turista*> getTuristas() const;

        friend std::ostream &operator<<(std::ostream &, const DTExpe &);
};

#endif
