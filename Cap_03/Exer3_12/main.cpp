#include "cuenta.h"

int main()
{
    cuenta cuenta1(1000);
    cuenta cuenta2(-200);

    cuenta1.credit(200);
    cuenta2.credit(200);

    cuenta1.cargar(500);
    cuenta2.cargar(500);

    cout << "El saldo1 es: " << cuenta1.obtenerSaldo() << "\n"
        << "El saldo2 es: " << cuenta2.obtenerSaldo() << endl;

    return 0;
}
