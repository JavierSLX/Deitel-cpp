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

    void establecerNombreCurso(string nombre);
    string obtenerNombreCurso(void);
    void mostrarMensaje(void);

private:
    string nombreCurso;
};
