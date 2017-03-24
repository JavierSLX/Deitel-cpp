#include "analisisCadena.h"

using namespace std;

int main()
{
    int posicion;
    string cadena;
    analisisCadena analisis;

    cout << "Coloque una cadena a analizar: ";
    getline(cin, cadena);

    posicion = analisis.posicionGuion(cadena);
    string a, b;
    analisis.separacionCadena(cadena, posicion, &a, &b);

    cout << "\nLas cadenas resultantes son: " << a << " y " << b << endl;

    return 0;
}
