#include <iostream>
#include "Elemento.h"

Elemento::Elemento(std::string nombre):_nombre(nombre), _siguiente(nullptr)
{
}

std::string Elemento::ObtenerNombre()
{
    return _nombre;
}

Elemento* Elemento::ObtenerSiguiente()
{
    return _siguiente;
}

void Elemento::EstablecerSiguiente(Elemento* elemento)
{
    _siguiente = elemento;
}

Elemento::~Elemento()
{
    std::cout << "Está siendo eliminado el elemento: " << _nombre << std::endl;
}