#pragma once
#include <string>
#include "Elemento.h"

class Lista
{
    public:
        Lista(Elemento* primer);
        Elemento* ObtenerPrimer();
        void Agregar(Elemento* elemento);
        void Eliminar(int indice);
        void Modificar(int posicion, int indice);
        void MostrarLista();

    private:
        Elemento* _primer;
        Elemento* ObtenerPorIndice(int posicion);
};