#include <iostream>
#include <string>

using namespace std;

class libroCalificaciones
{
public:
    void establecerNombreCurso(string nombre)
    {
        nombreCurso = nombre;
    }

    string obtenerNombreCurso(void)
    {
        return nombreCurso;
    }

    void mostrarMensaje(void)
    {
        cout << "Bienvenido al libro de calificaciones para\n" << obtenerNombreCurso() << endl;
    }

private:
    string nombreCurso;
};

int main(void)
{
    string nombre;
    libroCalificaciones libro;

    cout << "El nombre inicial del curso es: " << libro.obtenerNombreCurso() << endl;
    cout << "\nEscriba el nombre del curso: ";
    getline(cin, nombre);
    libro.establecerNombreCurso(nombre);

    cout << endl;
    libro.mostrarMensaje();

    return 0;
}
