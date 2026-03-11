#include <iostream>
#include <string>
#include <sstream>
#include <Experiencia.h>

class Alojamiento: public Experiencia{
  private:
    std::string hotel;
    TipoRegimen regimen;
    int cantNoches;
  public:
    float calcularCosto(){
      if (TipoRegimen == AllInculsive){
        calcularCosto = (precioBase + 10)*cantNoches;
      } else{ 
        calcularCosto = precioBase*cantNoches;
      };
    TipoRegimen getTipoRegimen(){
      return regimen;
    };
    int getcantNoches(){
      return cantNoches;
    };
};
