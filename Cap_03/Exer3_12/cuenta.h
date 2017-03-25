#include <iostream>
#include <string>

using namespace std;

class cuenta
{
public:
    cuenta(double cantidad)
    {
        if (cantidad >= 0)
            saldo = cantidad;
        else
        {
            cout << "La cantidad ingresada es invalida" << endl;
            saldo = 0;
        }
    }
    void credit(double cantidad);
    void cargar(double cantidad);
    double obtenerSaldo(void);
private:
    double saldo;
};
