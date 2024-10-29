#include <iostream>
#include "Elemento.h"
#include "Lista.h"

using namespace std;

Elemento NuevaFruta(string nombre)
{
    Elemento nuevaFruta(nombre);
    return nuevaFruta;
}
int main()
{

    cout << "Ingresa un elemento para crear la lista: ";
    string primer = "";
    cin >> primer;

    Elemento primeraFruta(primer);

    Lista listaFrutas(&primeraFruta);

    int indice;
    string nombre;
    Elemento nueva(nombre);

    int opt = 0;
    while (opt != 99)
    {
        system("clear");
        cout << "Qué desea hacer?" << endl;
        cout << " 1. Ver lista \n 2. Agregar fruta \n 3. Eliminar fruta \n 4. Modificar Lista" << endl;

        cin >> opt;
        switch (opt)
        {
        case 1:
            listaFrutas.MostrarLista();
            break;

        case 2:
        {
            cout << "Ingrese el nombre de la fruta que quiere agregar: ";
            cin >> nombre;

            Elemento nuevo(nombre); // Se crea en un bloque local específico

            listaFrutas.Agregar(&nuevo);

            cout << "Agregada correctamente!";
            break;
        }

        case 3:
        {
            cout << "Escriba el número de la fruta que desea eliminar" << endl;

            listaFrutas.MostrarLista();

            cin >> indice;

            listaFrutas.Eliminar(indice);
            break;
        }

        default:
            cout << "Debe elegir una de las opciones" << endl;
            break;
        }

        int temp;
        cout << "\nPresione cualquier tecla para continuar";
        cin>>temp;
    }

    return 0;
}