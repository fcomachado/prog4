DTExpe::DTExpe() {}
        
DTExpe::DTExpe(std::string codigoReserva, std::string descripcion, DTFecha fecha, std::list<std::string> turistas) {
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

std::ostream DTExpe::&operator<<(std::ostream &o ,DTExpe dtexpe) {
    std::string codigoReserva = dtexpe->getCodigoReserva();
    std::string descripcion = dtexpe->getDescripcion();
    DTFecha fechaSinFormato = dtexpe->getFecha();
    std::list<std::string> turistas = dtexpe->getTuristas();

    std::string fecha = fechaSinFormato.getDia() + '/' + fechaSinFormato.getMes() + '/' + fechaSinFormato.getAnio();

    o << codigoReserva << '->' << descripcion << '(' << fecha << ')/' turistas;

    return o;
} //arreglar
