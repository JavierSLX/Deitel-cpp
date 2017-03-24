#include "analisisCadena.h"

int analisisCadena::posicionGuion(string cadena)
{
    int posicion = 0;

    for (int i = 0; i < cadena.length(); i++)
    {
        if (cadena.at(i) == '-')
        {
            posicion = i;
            break;
        }
    }

    return posicion;
}

void analisisCadena::separacionCadena(string cadena, int posicion, string *parte1, string *parte2)
{
    if (posicion <= 0)
    {
        cout << "Valor de posicion no valido" << endl;
        *parte1 = "0";
        *parte2 = "0";
        return;
    }

    *parte1 = cadena.substr(0, posicion);
    *parte2 = cadena.substr(posicion+1, cadena.length()-1);
}
