#include <iostream>
#include <string>

using namespace std;

class analisisCadena
{
public:
    analisisCadena(void)
    {

    }

    //Funciones
    int posicionGuion(string cadena);
    void separacionCadena(string cadena, int posicion, string *parte1, string *parte2);
};
