#include "aleatorio.h"

void aleatorio::imprimirNumAleatorios(int n, int inicio, int termino)
{
    for (int i = 0; i < n; i++)
    {
        cout << setw(10) << inicio + rand() % termino;

        if ((i + 1) % 5 == 0)
        {
            cout << endl;
        }
    }
}

void aleatorio::imprimirConteoDados(int n)
{
    int conteo[6] = {0};
    int tiro;

    for (int i = 0; i < n; i++)
    {
        tiro = 1 + rand() % 6;
        conteo[tiro-1]++;
    }

    cout << "Cara" << setw(13) << "Frecuencia" << endl;

    for (int i = 1; i <= 6; i++)
    {
        cout << "  " << i << setw(13) << conteo[i-1] << endl;
    }
}

