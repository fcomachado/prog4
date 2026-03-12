#include <iostream>
#include <string>
#include <sstream>
#include <TipoRegimen.h>
#ifndef ALOJAMIENTO_H
#define ALOJAMIENTO_H

class Alojamiento: public Experiencia {
    private:
        std::string hotel;
        TipoRegimen regimen;
        int cantNoches;

    public:
        Alojamiento();
        Alojamiento(std::string, TipoRegimen, int);

        virtual float calcularCosto();

        void setHotel(std::string);
        void setRegimen(TipoRegimen);
        void setCantNoches(int);

        TipoRegimen getTipoRegimen();
        int getcantNoches();

        ~Alojamiento();
};

#endif
