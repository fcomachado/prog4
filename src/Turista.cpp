#include <iostream>
#include <string>
#include <sstream>
#include <Turista.h>

Turista::Turista() {}

Turista::Turista(std::string _ci, std::string _nombre, std::string _email) {
    ci = _ci;
    nombre = _nombre;
    email = _email;
}

void Turista::setCi(std::string ci) { this->ci = ci; }
void Turista::setNombre(std::string nombre) { this->nombre = nombre; }
void Turista::setEmail(std::string email) { this->email = email; }
void Turista::agregarExperiencia(Experiencia* exp){ experiencias.push_back(exp); }//agrega la exp
void Turista::borrarExperiencia(Experiencia* exp){ experiencias.remove(exp); }//borra la exp

std::string Turista::getCi() { return this->ci; }
std::string Turista::getNombre() { return this->nombre; }
std::string Turista::getEmail() { return this->email; }
std::list<Experiencia*> Turista::getExperiencias() { return experiencias; }


std::string Turista::toString() { 
    std::string ci = this->getCi();
    std::string nombre = this->getNombre();
    std::string email = this->getEmail();
    return ci + "->" + nombre + "/" + email;
}

//obtiene el código de reserva de todas sus experiencias cuya fecha sea posterior
//al parámetro desde y costo sea mayor o igual que min y menor igual a max
set<string> Turista::listarExperiencias(DTFecha desde, float min, float max){
    std::list<Experiencia*> listaExps = getExperiencias();
    std::list<Experiencia*>::iterator iter = listaExps.begin();
    set<string> conjCR; //conjunto con los códigos de reserva

    while (iter != listaExps.end()) {
        Experiencia* exp = *iter;

        DTFecha fecha = exp->getFecha();
        float costo = exp->calcularCosto();
        if (compararFechas(fecha, desde) && costo >= min && costo <= max) {
            conjCR.insert(exp->getCodigoReserva());
        }

        iter++;
    }
    return conjCR;
}

Turista::~Turista() {

}