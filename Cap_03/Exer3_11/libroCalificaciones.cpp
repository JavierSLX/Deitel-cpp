#include "libroCalificaciones.h"

void libroCalificaciones::establecerNombreCurso(string nombre)
{
    if (nombre.length() <= 25)
        nombreCurso = nombre;
    else
    {
        nombreCurso = nombre.substr(0, 25);

        cout << "El nombre del curso \"" << nombre << "\" excede la longitud maxima (25).\n"
            << "Se limito nombreCurso a los primeros 25 caracteres.\n" << endl;
    }
}

void libroCalificaciones::establecerNombreInstructor(string nombre)
{
    if (nombre.length() <= 25)
        nombreInstructor = nombre;
    else
    {
        nombreInstructor = nombre.substr(0, 25);

        cout << "El nombre del instructor \"" << nombre << "\" excede la longitud maxima (25).\n"
            << "Se limito nombreInstructor a los primeros 25 caracteres.\n" << endl;
    }
}

string libroCalificaciones::obtenerNombreCurso(void)
{
    return nombreCurso;
}

string libroCalificaciones::obtenerNombreInstructor(void)
{
    return nombreInstructor;
}

void libroCalificaciones::mostrarMensaje(void)
{
    cout << "Bienvenido al libro de calificaciones para " << obtenerNombreCurso() << "!\n" <<
        "Este curso es presentado por: " << obtenerNombreInstructor() << endl;
}
