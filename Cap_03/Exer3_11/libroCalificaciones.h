#include <iostream>
#include <string>

using namespace std;

class libroCalificaciones
{
public:
    libroCalificaciones(string curso, string instructor)
    {
        establecerNombreCurso(curso);
        establecerNombreInstructor(instructor);
    }

    void establecerNombreCurso(string nombre);
    void establecerNombreInstructor(string nombre);
    string obtenerNombreCurso(void);
    string obtenerNombreInstructor(void);
    void mostrarMensaje(void);

private:
    string nombreCurso;
    string nombreInstructor;
};
