#include <DTExpe.h>
using namespace std;

DTExpe::DTExpe() {}
        
DTExpe::DTExpe(std::string codigoReserva, std::string descripcion, DTFecha fecha, std::list<Turista*> turistas) {
    this->codigoReserva = codigoReserva;
    this->descripcion = descripcion;
    this->fecha = fecha;
    this->turistas = turistas;
}

DTExpe::DTExpe(DTExpe & expe) {
    std::string codReserva = expe.getCodigoReserva();
    std::string descr = expe.getDescripcion();
    DTFecha fech = expe.getFecha();
    std::list<Turista*> turis = expe.getTuristas();

    DTExpe resu(codReserva, descr, fech, turis);
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

//auxiliar para imprimir la lista de turistas en la ultima funcion
ostream &operator<<(ostream& o, const list<Turista*> turistas){
    for(list<Turista*>::iterator it = turistas.begin(); it != turistas.end(); it++){
        o << *it << ',';
    }
    return o;
}

std::ostream &operator<<(std::ostream& o, const DTExpe& dtexpe) {
    std::string codigoReserva = dtexpe.getCodigoReserva();
    std::string descripcion = dtexpe.getDescripcion();
    //DTFecha fechaSinFormato = dtexpe.getFecha();

    std::list<Turista*> turistas = dtexpe.getTuristas();

    //std::string fecha = std::to_string(fechaSinFormato.getDia()) + '/' + std::to_string(fechaSinFormato.getMes()) + '/' + std::to_string(fechaSinFormato.getAnio());
    
    std::string fecha = std::to_string( dtexpe.getFecha().getDia()) + '/' + std::to_string( dtexpe.getFecha().getMes()) + '/' + std::to_string( dtexpe.getFecha().getAnio());

    o << codigoReserva << '->' << descripcion << '(' << fecha << ')/' << turistas ; //falta turistas

    return o;
} //arreglar
