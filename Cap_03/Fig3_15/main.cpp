#include "libroCalificaciones.h"

int main()
{
    libroCalificaciones libro1("CS101 Introduccion a la programacion en C++");
    libroCalificaciones libro2("CS102 C++:Estruc de datos");

    cout << "el nombre inicial del curso de libro1 es: " << libro1.obtenerNombreCurso()
        << "\nel nombre inicial del curso de libro2 es: " << libro2.obtenerNombreCurso() << endl;

    libro1.establecerNombreCurso("CS101 Programacion en C++");
    cout << "\nel nombre del curso de libro1 es: " << libro1.obtenerNombreCurso()
        <<"\nel nombre del curso de libro2 es: " << libro2.obtenerNombreCurso() << endl;

    return 0;
}
