#include "libroCalificaciones.h"

void libroCalificaciones::establecerNombreCurso(string nombre)
{
    if (nombre.length() <= 25)
        nombreCurso = nombre;
    else
    {
        nombreCurso = nombre.substr(0, 25);

        cout << "El nombre \"" << nombre << "\" excede la longitud maxima (25).\n"
            << "\nSe limito nombreCurso a los primeros 25 caracteres.\n" << endl;
    }
}

string libroCalificaciones::obtenerNombreCurso(void)
{
    return nombreCurso;
}

void libroCalificaciones::mostrarMensaje(void)
{
    cout << "Bienvenido al libro de calificaciones para " << obtenerNombreCurso() << "!" << endl;
}
