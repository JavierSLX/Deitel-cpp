#include "Empleado.h"

void Empleado::establecerNombre(string nombre)
{
    nombreEmpleado = nombre;
}

void Empleado::establecerApellido(string apellido)
{
    apellidoEmpleado = apellido;
}

void Empleado::establecerSalario(double salario)
{
    if (salario < 0)
        salarioEmpleado = 0;
    else
        salarioEmpleado = salario;
}

string Empleado::obtenerNombre(void)
{
    return nombreEmpleado;
}

string Empleado::obtenerApellido(void)
{
    return apellidoEmpleado;
}

double Empleado::obtenerSalario(void)
{
    return salarioEmpleado;
}
