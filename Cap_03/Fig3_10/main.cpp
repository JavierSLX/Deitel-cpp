#include "libroCalificaciones.h"

int main()
{
    libroCalificaciones libro1("Programacion");
    libroCalificaciones libro2("Matematicas");

    cout << "libro1 fue creado para el curso: " << libro1.obtenerNombreCurso()
        << "\nlibro2 fue creado para el curso: " << libro2.obtenerNombreCurso() << endl;

    return 0;
}
