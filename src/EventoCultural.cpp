#include "EventoCultural.h"

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
    return 0;
}

EventoCultural::~EventoCultural() {

}