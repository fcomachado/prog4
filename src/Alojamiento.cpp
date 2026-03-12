#include <iostream>
#include <string>
#include <sstream>
#include <Experiencia.h>
#include <Alojamiento.h>



float Alojamiento::calcularCosto(){
  if (TipoRegimen == AllInculsive){
    calcularCosto = (precioBase + 10)*cantNoches;
  } else{ 
    calcularCosto = precioBase*cantNoches;
  }
}

TipoRegimen Alojamiento::getTipoRegimen(){
  return this->regimen;
}

int Alojamiento::getcantNoches(){
  return this->cantNoches;
}

