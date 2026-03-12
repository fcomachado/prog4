DTExpe::DTExpe() {}
        
DTExpe::DTExpe(std::string codigoReserva, std::string descripcion, DTFecha fecha, Turista* turistas) {
    this->codigoReserva = codigoReserva;
    this->descripcion = descripcion;
    this->fecha = fecha;
    this->turistas = turistas;
}

string getCodigoReserva();
string getDescripcion();
DTFecha getFecha();
std::list<Turista*> getTuristas();