#include <iostream>
#include <string>

using namespace std;

class Empleado
{
public:
    Empleado(string nombre, string apellido, double salario)
    {
        nombreEmpleado = nombre;
        apellidoEmpleado = apellido;

        if (salario < 0)
            salarioEmpleado = 0;
        else
            salarioEmpleado = salario;
    }

    void establecerNombre(string nombre);
    void establecerApellido(string apellido);
    void establecerSalario(double salario);
    string obtenerNombre(void);
    string obtenerApellido(void);
    double obtenerSalario(void);
private:
    string nombreEmpleado;
    string apellidoEmpleado;
    double salarioEmpleado;
};
