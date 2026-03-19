#include <set>
#include <string>
#include <iostream>
#include <sstream>
#ifndef TOURGUIADO_H
#define TOURGUIADO_H
using namespace std;

class TourGuiado: public Experiencia {
    private:
        string agencia;
        set<string> lugaresVisitados;
    public:
        TourGuiado(){};
        TourGuiado(string, set<string>);

        string getAgencia();
        set<string> getLugaresVisitados();
        
        //¿podria querer modificar la empresa responsable y el itinerario de lugares a visitar?
        void setAgencia(string);
        void setLugaresVisitados(set<string>);

        virtual float calcularCosto();
        ~TourGuiado();
};

#endif 