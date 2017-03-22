#include <iostream>
#include <string>

using namespace std;

class libroCalificaciones
{
public:
    void mostrarMensaje(string mensaje)
    {
        cout << "Bienvenido al libro de calificaciones para\n" << mensaje << "!" << endl;
    }
};

int main(void)
{
    string mensaje;
    libroCalificaciones libro;

    cout << "Escriba el nombre del curso" << endl;
    getline(cin, mensaje);
    cout << endl;

    libro.mostrarMensaje(mensaje);
    return 0;
}
