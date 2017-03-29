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

void aleatorio::jugarCraps(void)
{
    enum Estado{CONTINUAR, GANO, PERDIO};

    int miPunto;
    Estado estadoJuego;

    int sumaDados = tirarDados();

    switch(sumaDados)
    {
        case 7: case 11:
            estadoJuego = GANO;
            break;
        case 2: case 3: case 12:
            estadoJuego = PERDIO;
            break;
        default:
            estadoJuego = CONTINUAR;
            miPunto = sumaDados;
            cout << "El punto es " << miPunto << endl;
    }

    while (estadoJuego == CONTINUAR)
    {
        sumaDados = tirarDados();

        if (sumaDados == miPunto)
            estadoJuego = GANO;
        else
            if (sumaDados == 7)
                estadoJuego = PERDIO;
    }

    if (estadoJuego == GANO)
        cout << "El jugador gana" << endl;
    else
        cout << "El jugador pierde" << endl;
}

int aleatorio::tirarDados(void)
{
    int dado1 = 1 + rand() % 6;
    int dado2 = 1 + rand() % 6;

    int suma = dado1 + dado2;

    cout << "El jugador tiro " << dado1 << " + " << dado2 << " = " << suma << endl;
    return suma;
}

