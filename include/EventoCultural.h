#include <set>
#include <string>
#include <iostream>
#include <sstream>
#include "Experiencia.h"

#ifndef EVENTOCULTURAL_H
#define EVENTOCULTURAL_H

class EventoCultural: public Experiencia {
    private:
        std::string ubicacion;
        bool usoCupon;
    public:
        EventoCultural();
        EventoCultural(std::string, bool);

        std::string getUbicacion();
        bool getUsoCupon();

        void setUbicacion(std::string);
        void setUsoCupon(bool);

        float calcularCosto();

        ~EventoCultural();
};

#endif