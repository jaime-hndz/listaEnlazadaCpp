#pragma once
#include <string>

class Elemento
{
    public:
        Elemento(std::string nombre);
        ~Elemento();
        std::string ObtenerNombre();
        Elemento* ObtenerSiguiente();
        void EstablecerSiguiente(Elemento* elemento);

    private:
        std::string _nombre;
        Elemento* _siguiente;
};