#include <iostream>
#include <string>
#include <sstream>
#include <set>
#include <DTFecha.h>
#include <DTExpe.h>
#ifndef EXPERIENCIA_H
#define EXPERIENCIA_H

class Turista;

class Experiencia {
    private:
       std::string codigoReserva;
       std::string descripcion;
       int precioBase;
       DTFecha fecha;
       std::set<Turista*> turistas; //lista de punteros a turista

    public:
        Experiencia();
        Experiencia(std::string, std::string, int, DTFecha);

        void setCodigoReserva(std::string);
        void setDescripcion(std::string);
        void setPrecioBase(int);
        void setFecha(DTFecha);
        void setTuristas(Turista*);

        std::string getCodigoReserva();
        std::string getDescripcion();
        int getPrecioBase();
        DTFecha getFecha();
        //Turista* getTuristas();

        DTExpe getDT();
        std::set<Truista*> getTuristas();
        virtual float calcularCosto() = 0;
       
        ~Experiencia();
}

#endif
