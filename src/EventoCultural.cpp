#include <EventoCultural.h>
#include <Experiencia.h>

EventoCultural::EventoCultural() {
    ubicacion = "";
    usoCupon = false;
}

EventoCultural::EventoCultural(std::string ubicacion, bool usoCupon) {
    this->ubicacion = ubicacion;
    this->usoCupon = usoCupon;
}

std::string EventoCultural::getUbicacion() {
    return ubicacion;
}

bool EventoCultural::getUsoCupon() {
    return usoCupon;
}

void EventoCultural::setUbicacion(std::string ubicacion) {
    this->ubicacion = ubicacion;
}
    
void EventoCultural::setUsoCupon(bool usoCupon) {
    this->usoCupon = usoCupon;
}

float EventoCultural::calcularCosto() {
    float precioBase = this->getPrecioBase();
    std::list<Turista*> conjuntoTuristas = this->getTuristas();
    int cantidadTuristas = conjuntoTuristas.size();

    float resultado = 0;
    if (getUsoCupon()) {
        resultado = (precioBase * cantidadTuristas) - (5 * cantidadTuristas);
    } else {
        resultado = (precioBase * cantidadTuristas);
    }

    return resultado;
}

EventoCultural::~EventoCultural() {

}