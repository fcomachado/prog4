#include <iostream>
#include <string>
#include <sstream>
#include <DTFecha.h>
#include <Experiencia.h>
#include <set>
#ifndef TURISTA_H
#define TURISTA_H

using namespace std;

class Turista {
    private:
       std::string ci;
       std::string nombre;
       std::string email;
       std::list<Experiencia*> experiencias;

    public:
        Turista();
        Turista(std::string, std::string, std::string);

        void setCi(std::string);
        void setNombre(std::string);
        void setEmail(std::string);
        void agregarExperiencia(Experiencia*);
        void borrarExperiencia(Experiencia*);
        std::string getCi();
        std::string getNombre();
        std::string getEmail();
        std::list<Experiencia*> getExperiencias();

        std::string toString();
        set<string> listarExperiencias(DTFecha desde, float min, float max);
       
        ~Turista();
};

#endif
