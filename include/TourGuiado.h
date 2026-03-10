#include <set>
#include <string>
#include <iostream>
#include <sstream>
#ifndef TOURGUIADO_H
#define TOURGUIADO_H

class TourGuiado: public Experiencia {
    private:
        std::string agencia;
        std::set<std::string> lugaresVisitados;
    public:
        TourGuiado();
        TourGuiado(std::string, std::set<std::string>),

        std::string getAgencia();
        std::set<std::string> getLugaresVisitados();
        
        //¿podria querer modificar la empresa responsable y el itinerario de lugares a visitar?
        void setAgencia(std::string);
        void setLugaresVisitados(std::set<std::string>);

        float calcularCosto();
        ~TourGuiado();
}

#endif 