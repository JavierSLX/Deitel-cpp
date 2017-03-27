#include <iostream>

using namespace std;

class Fecha
{
public:
    Fecha(int dia, int mes, int ano)
    {
        if (dia < 1)
            diaFecha = 1;
        else
            diaFecha = dia;

        if (mes >= 1 && mes <= 12)
            mesFecha = mes;
        else
            mes = 1;

        anoFecha = ano;
    }
    void establecerDia(int dia);
    void establecerMes(int mes);
    void establecerAno(int ano);
    int obtenerDia(void);
    int obtenerMes(void);
    int obtenerAno(void);
    void mostrarFecha(void);
private:
    int diaFecha;
    int mesFecha;
    int anoFecha;
};
