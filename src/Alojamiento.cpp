#include <iostream>
#include <string>
#include <sstream>
#include <Experiencia.h>
#include <Alojamiento.h>

Alojamiento::Alojamiento() {}

Alojamiento::Alojamiento(std::string hotel, TipoRegimen regimen, int cantNoches){
  this->hotel = hotel;
  this->regimen = regimen;
  this->cantNoches = cantNoches;
}

float Alojamiento::calcularCosto(){
  if (TipoRegimen == AllInculsive){
    calcularCosto = (precioBase + 10)*cantNoches;
  } else{ 
    calcularCosto = precioBase*cantNoches;
  }
};

TipoRegimen Alojamiento::getTipoRegimen(){
  return this->regimen;
};

int Alojamiento::getcantNoches(){
  return this->cantNoches;
};

void setHotel(std::string hotel){
  this->hotel = hotel;
};

void setRegimen(TipoRegimen regimen){
  this->regimen = regimen;
};

void setCantNoches(int cantNoches){
  this->cantNoches = cantNoches;
};

Alojamiento::~Alojamiento(){}      


