#include "aleatorio.h"

int main()
{
    //Asigna memoria para un solo objeto
    aleatorio *nPtr = new aleatorio;

    cout << "Objeto 0" << endl;
    nPtr->jugarCraps();

    int n;
    cout << "\nCuantos elementos quiere: ";
    cin >> n;

    //Asigna memoria para un determinado arreglo de objetos
    aleatorio *aPtr = new aleatorio[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Objeto " << i + 1 << endl;
        aPtr[i].jugarCraps();
        cout << endl;
    }

    delete nPtr;
    delete []aPtr;

    return 0;
}
