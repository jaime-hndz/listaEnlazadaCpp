#include <iostream>
#include "Elemento.h"
#include "Lista.h"

using namespace std;


int main()
{
    Elemento* mango = new Elemento("mango");
    Elemento* pera = new Elemento("pera");
    Elemento* manzana = new Elemento("manzana");

    Lista lista(mango);

    lista.Agregar(pera);
    lista.Agregar(manzana);

    lista.Eliminar(mango);
    lista.MostrarLista();


    delete pera;
    delete manzana;
    return 0;
}