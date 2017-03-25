#include "cuenta.h"

void cuenta::credit(double cantidad)
{
    saldo += cantidad;
}

void cuenta::cargar(double cantidad)
{
    if (cantidad > saldo)
    {
        cout << "El monto a cargar excede el saldo de la cuenta" << endl;
    }
    else
        saldo -= cantidad;
}

double cuenta::obtenerSaldo(void)
{
    return saldo;
}
