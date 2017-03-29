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
