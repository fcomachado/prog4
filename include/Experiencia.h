#include <iostream>
#include <string>
#include <sstream>
#include <list>

#ifndef EXPERIENCIA_H
#define EXPERIENCIA_H

#include "DTFecha.h"
#include "DTExpe.h"
#include "Turista.h"

class Turista;

class Experiencia {
    private:
       std::string codigoReserva;
       std::string descripcion;
       int precioBase;
       DTFecha fecha;
       std::list<Turista*> turistas; //lista de punteros a turista

    public:
        Experiencia();
        Experiencia(std::string, std::string, int, DTFecha);

        void setCodigoReserva(std::string);
        void setDescripcion(std::string);
        void setPrecioBase(int);
        void setFecha(int, int, int);
        void setTuristas(std::list<Turista*>);

        std::string getCodigoReserva();
        std::string getDescripcion();
        int getPrecioBase();
        DTFecha getFecha();

        DTExpe getDT();
        std::list<Turista*> getTuristas();
        virtual float calcularCosto() = 0;
       
        ~Experiencia();
};

#endif
