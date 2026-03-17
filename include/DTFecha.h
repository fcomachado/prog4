#include <iostream>
#include <string>
#include <sstream>
#ifndef DTFECHA_h
#define DTFECHA_h

class DTFecha {
    private:
        int dia;
        int mes;
        int anio;
    
    public:

        DTFecha(); //constructor vacio
        DTFecha(int, int, int); //constructor por parametros
        DTFecha(DTFecha &); //constructor por copia

        int getDia();
        int getMes();
        int getAnio();
        bool compararFechas(class DTFecha, class DTFecha); //devuelve true si fecha1 es posterior a fecha2
};

#endif
