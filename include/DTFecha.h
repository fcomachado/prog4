#include <iostream>
#include <string>
#include <sstream>
#ifndef DTFECHA_h
#define DTFECHA_h

class DTFecha {
    private:
        int Dia;
        int Mes;
        int Anio;
    
    public:

        DTFecha(); //constructor vacio
        DTFecha(int, int, int); //constructor por parametros
        DTFecha(&DTFecha); //constructor por copia

        int getDia();
        int getMes();
        int getAnio();
}

#endif
