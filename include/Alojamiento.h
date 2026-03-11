#include <iostream>
#include <string>
#include <sstream>
#ifndef ALOJAMIENTO_H
#define ALOJAMIENTO_H

class Alojamiento: public Experiencia{
    private:
        std::string hotel;
        TipoRegimen regimen;
        int cantNoches;
    public:
        float calcularCosto();

        TipoRegimen getTipoRegimen();
        int getcantNoches();
};

#endif
