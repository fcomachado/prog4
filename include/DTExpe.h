#include <iostream>
#include <sstream>
#include <string>
#include "DTFecha.h"
#ifndef DTEXPE_H
#define DTEXPE_H

class DTExpe {
    private:
        string codigoReserva;
        string descripcion;
        DTFecha fecha;
        set<string> turistas;
    
    public:

        DTExpe();
        DTExpe(string codigoReserva, string descripcion, DTFecha fecha, set<string> turistas);

        string getCodigoReserva();
        string getDescripcion();
        DTFecha getFecha();
        set<string> getTuristas();
};

#endif
