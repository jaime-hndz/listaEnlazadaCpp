#pragma once
#include <string>
#include "Elemento.h"

class Lista
{
    public:
        Lista(Elemento* primer);
        Elemento* ObtenerPrimer();
        void Agregar(Elemento* elemento);
        void Eliminar(Elemento* elemento);
        void Modificar(int posicion, Elemento* elemento);
        void MostrarLista();

    private:
        Elemento* _primer;
};