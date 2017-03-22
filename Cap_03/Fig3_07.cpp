#include <iostream>
#include <string>

using namespace std;

class libroCalificaciones
{
public:
    //Constructor
    libroCalificaciones(string nombre)
    {
        establecerNombreCurso(nombre);
    }

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
        cout << "Bienvenido al libro de calificaciones para " << obtenerNombreCurso() << "!" << endl;
    }

private:
    string nombreCurso;
};

int main(void)
{
    libroCalificaciones libro1("Programacion");
    libroCalificaciones libro2("Matematicas");

    cout << "libro1 se creo para el curso: " << libro1.obtenerNombreCurso()
        << "\nlibro2 se creo para el curso: " << libro2.obtenerNombreCurso() << endl;

    return 0;
}
