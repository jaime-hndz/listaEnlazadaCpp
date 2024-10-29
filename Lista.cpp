#include <iostream>
#include "Lista.h"
#include "Elemento.h"

Lista::Lista(Elemento* primer): _primer(primer)
{

}

Elemento *Lista::ObtenerPrimer()
{
    return _primer;
}

Elemento *Lista::ObtenerPorIndice(int indice) {
    Elemento *i = _primer;
    int contador = 0;
    while (i != nullptr) {
        if (contador == indice) {
            return i;
        }
        i = i->ObtenerSiguiente();
        contador++;
    }
    throw "No fue encontrado";
}

void Lista::Agregar(Elemento *elemento)
{
    if (!_primer)
    {
        _primer = elemento;
    }
    else
    {
        Elemento *temporal = _primer;
        while (temporal->ObtenerSiguiente())
        {
            temporal = temporal->ObtenerSiguiente();
        }
        temporal->EstablecerSiguiente(elemento);
    }
}


void Lista::Eliminar(int indice)
{
    Elemento *elemento = ObtenerPorIndice(indice);
    if (!_primer)
        return;

    if (_primer == elemento)
    {
        _primer = _primer->ObtenerSiguiente();
        delete elemento;
        return;
    }
    Elemento *temporal = _primer;
    while (temporal->ObtenerSiguiente() && temporal->ObtenerSiguiente() != elemento)
    {
        temporal = temporal->ObtenerSiguiente();
    }

    if (temporal->ObtenerSiguiente() == elemento)
    {
        temporal->EstablecerSiguiente(elemento->ObtenerSiguiente());
        delete elemento;
    }
}
void Lista::Modificar(int posicion, int indice)
{
    Elemento *elemento = ObtenerPorIndice(indice);
    if (!_primer)
        return;

    Elemento *temp = _primer;
    int contador = 0;
    while (temp && contador < posicion)
    {
        temp = temp->ObtenerSiguiente();
        contador++;
    }

    if (temp)
    {
        temp->EstablecerSiguiente(elemento->ObtenerSiguiente());
        elemento->EstablecerSiguiente(temp->ObtenerSiguiente());
        temp = elemento;
    }
}

void Lista::MostrarLista()
{
    Elemento *i = _primer;
    int contador = 1;
    while (i != nullptr)
    {
        std::cout <<contador<<". "<< i->ObtenerNombre() << std::endl;
        i=i->ObtenerSiguiente();
        contador++;
    }
}
