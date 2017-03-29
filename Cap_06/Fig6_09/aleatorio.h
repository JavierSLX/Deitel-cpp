#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

class aleatorio
{
public:
    aleatorio()
    {
        srand(time(NULL));
    }
    void imprimirNumAleatorios(int n, int inicio, int termino);
    void imprimirConteoDados(int n);
};
