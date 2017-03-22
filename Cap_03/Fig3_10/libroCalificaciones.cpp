#include "libroCalificaciones.h"

void libroCalificaciones::establecerNombreCurso(string nombre)
{
    nombreCurso = nombre;
}

string libroCalificaciones::obtenerNombreCurso(void)
{
    return nombreCurso;
}

void libroCalificaciones::mostrarMensaje(void)
{
    cout << "Bienvenido al libro de calificaciones para " << obtenerNombreCurso() << "!" << endl;
}
