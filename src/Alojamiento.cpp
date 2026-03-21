#include <iostream>
#include <string>
#include <sstream>
#include <Experiencia.h>
#include <Alojamiento.h>

Alojamiento::Alojamiento() {};

Alojamiento::Alojamiento(std::string hotel, TipoRegimen regimen, int cantNoches){
  this->hotel = hotel;
  this->regimen = regimen;
  this->cantNoches = cantNoches;
}

float Alojamiento::calcularCosto(){
  float calcularCosto = 0;
  if (this->regimen == AllInclusive){
    calcularCosto = (this->getPrecioBase() + 10)*this->cantNoches;
  } else{ 
    calcularCosto = (this->getPrecioBase())*this->cantNoches;
  }
  return calcularCosto;
};

TipoRegimen Alojamiento::getTipoRegimen(){
  return this->regimen;
};

int Alojamiento::getcantNoches(){
  return this->cantNoches;
};

void Alojamiento::setHotel(std::string hotel){
  this->hotel = hotel;
};

void Alojamiento::setRegimen(TipoRegimen regimen){
  this->regimen = regimen;
};

void Alojamiento::setCantNoches(int cantNoches){
  this->cantNoches = cantNoches;
};

Alojamiento::~Alojamiento(){}; 


