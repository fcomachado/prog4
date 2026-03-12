#include <iostream>
#include <string>
#include <sstream>
#include <DTFecha.h>
#include <set>
#ifndef TURISTA_H
#define TURISTA_H

using namespace std;

class Turista {
    private:
       std::string ci;
       std::string nombre;
       std::string email;

    public:
        Turista();
        Turista(std::string, std::string, std::string);

        void setCodigoReserva(std::string);
        void setDescripcion(std::string);
        void setPrecioBase(int);
        void setFecha(DTFecha);
        void setTuristas(Turista*);

        std::string getCi();
        std::string getNombre();
        std::string getEmail();

        std::string toString();
        set<string> listarExperiencias(DTFecha desde, float min, float max);
       
        ~Turista();
};

#endif
