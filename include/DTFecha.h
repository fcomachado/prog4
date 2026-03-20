#include <iostream>
#include <string>
#include <sstream>

#ifndef DTFECHA_H
#define DTFECHA_H

class DTFecha {
    private:
        int dia;
        int mes;
        int anio;
    
    public:

        DTFecha(); //constructor vacio
        DTFecha(int, int, int); //constructor por parametros
        DTFecha(const DTFecha &); //constructor por copia

        int getDia() const;
        int getMes() const;
        int getAnio() const;
        bool compararFechas(class DTFecha, class DTFecha); //devuelve true si fecha1 es posterior a fecha2
};

#endif
