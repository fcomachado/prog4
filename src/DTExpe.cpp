#include <DTExpe.h>


DTExpe::DTExpe() {}
        
DTExpe::DTExpe(std::string codigoReserva, std::string descripcion, DTFecha fecha, std::list<Turista*> turistas) {
    this->codigoReserva = codigoReserva;
    this->descripcion = descripcion;
    this->fecha = fecha;
    this->turistas = turistas;
}

std::string DTExpe::getCodigoReserva() {
    return this->codigoReserva;
}
std::string DTExpe::getDescripcion() {
    return this->descripcion;
}

DTFecha DTExpe::getFecha() {
    return this->fecha;
}

std::list<Turista*> DTExpe::getTuristas() {
    return this->turistas;
}

std::ostream &operator<<(std::ostream &o, DTExpe dtexpe) {
    std::string codigoReserva = dtexpe.getCodigoReserva();
    std::string descripcion = dtexpe.getDescripcion();
    //DTFecha fechaSinFormato = dtexpe.getFecha();

    //std::list<Turista*> turistas = dtexpe.getTuristas();

    //std::string fecha = std::to_string(fechaSinFormato.getDia()) + '/' + std::to_string(fechaSinFormato.getMes()) + '/' + std::to_string(fechaSinFormato.getAnio());
    
    std::string fecha = std::to_string( dtexpe.getFecha().getDia()) + '/' + std::to_string( dtexpe.getFecha().getMes()) + '/' + std::to_string( dtexpe.getFecha().getAnio());

    o << codigoReserva << '->' << descripcion << '(' << fecha << ')/'; //falta turistas

    return o;
} //arreglar
