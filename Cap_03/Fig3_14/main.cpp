#include "Empleado.h"

int main()
{
    Empleado empleado1("Javier", "Serrano", -100);
    Empleado empleado2("Ian", "Serrano", 1000);

    cout << "El salario mensual de " << empleado1.obtenerNombre() << " " << empleado1.obtenerApellido()
        << " es de $ " << empleado1.obtenerSalario() << endl;

    cout << "El salario mensual de " << empleado2.obtenerNombre() << " " << empleado2.obtenerApellido()
        << " es de $ " << empleado2.obtenerSalario() << endl;

    //Modifica el salario inicial del empleado1
    empleado1.establecerSalario(1200);

    //Calcula el salario anual
    cout << "El salario anual de " << empleado1.obtenerNombre() << " " << empleado1.obtenerApellido()
        << " es de $ " << empleado1.obtenerSalario()*12 << endl;

    cout << "El salario anual de " << empleado2.obtenerNombre() << " " << empleado2.obtenerApellido()
        << " es de $ " << empleado2.obtenerSalario()*12 << endl;

    //Calcula el salario anual con aumento del 10%
    cout << "El salario anual de " << empleado1.obtenerNombre() << " " << empleado1.obtenerApellido()
        << " es de $ " << ((empleado1.obtenerSalario()*12)*0.10) + (empleado1.obtenerSalario()*12) << endl;

    cout << "El salario anual de " << empleado2.obtenerNombre() << " " << empleado2.obtenerApellido()
        << " es de $ " << ((empleado2.obtenerSalario()*12)*0.10) + (empleado2.obtenerSalario()*12) << endl;

    return 0;
}
