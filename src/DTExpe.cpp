#include <DTExpe.h>
using namespace std;

DTExpe::DTExpe() {}
        
DTExpe::DTExpe(std::string codigoReserva, std::string descripcion, DTFecha fecha, std::list<Turista*> turistas) {
    this->codigoReserva = codigoReserva;
    this->descripcion = descripcion;
    this->fecha = fecha;
    this->turistas = turistas;
}

DTExpe::DTExpe(const DTExpe & expe) {
    std::string codReserva = expe.getCodigoReserva();
    std::string descr = expe.getDescripcion();
    DTFecha fech = expe.getFecha();
    std::list<Turista*> turis = expe.getTuristas();

    DTExpe resu(codReserva, descr, fech, turis);
}


std::string DTExpe::getCodigoReserva() const{
    return this->codigoReserva;
}
std::string DTExpe::getDescripcion() const{
    return this->descripcion;
}

DTFecha DTExpe::getFecha() const {
    return this->fecha;
}

std::list<Turista*> DTExpe::getTuristas() const {
    return this->turistas;
}

//auxiliar para imprimir la lista de turistas en la ultima funcion
std::ostream &operator<<(std::ostream& o, const std::list<Turista*>& turistas) {
    for(std::list<Turista*>::const_iterator it = turistas.begin(); it != turistas.end(); ++it){
        o << (*it)->getNombre();

        std::list<Turista*>::const_iterator next = it;
        ++next;
        if (next != turistas.end()) {
            o << ",";
        }
    }
    return o;
}

std::ostream &operator<<(std::ostream& o, const DTExpe& dtexpe) {
    std::string codigoReserva = dtexpe.getCodigoReserva();
    std::string descripcion = dtexpe.getDescripcion();
    //DTFecha fechaSinFormato = dtexpe.getFecha();

    std::list<Turista*> turistas = dtexpe.getTuristas();

    //std::string fecha = std::to_string(fechaSinFormato.getDia()) + '/' + std::to_string(fechaSinFormato.getMes()) + '/' + std::to_string(fechaSinFormato.getAnio());
    
    //std::string fecha = std::to_string( dtexpe.getFecha().getDia()) + "/" + std::to_string( dtexpe.getFecha().getMes()) + "/" + std::to_string( dtexpe.getFecha().getAnio());

    std::stringstream ss;
    ss << dtexpe.getFecha().getDia() << "/" << dtexpe.getFecha().getMes() << "/" << dtexpe.getFecha().getAnio();
    std::string fecha = ss.str();

    std::stringstream tt;
    std::list<Turista*>::iterator it;
    for (it = turistas.begin(); it != turistas.end(); it++) {
        if (it != turistas.begin()) {
            tt << ", ";
        }
        tt << (*it)->getNombre();
    }

    std::string turistasFinal = tt.str();

    o << codigoReserva << "->" << descripcion << "(" << fecha << ")/" << turistasFinal ; //falta turistas

    return o;
} //arreglar
