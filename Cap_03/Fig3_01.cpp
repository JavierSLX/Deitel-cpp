#include <iostream>

using namespace std;

//Clase LibroCalificaciones
class libroCalificaciones
{
    public:
    void mostrarMensaje(void)
    {
        cout << "Bienvenido al libro de calificaciones" << endl;
    }
};

int main(void)
{
    libroCalificaciones libro;
    libro.mostrarMensaje();

    return 0;
}
