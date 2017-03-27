#include "Fecha.h"

void Fecha::establecerDia(int dia)
{
    if (dia < 1)
        diaFecha = 1;
    else
        diaFecha = dia;
}

void Fecha::establecerMes(int mes)
{
    if (mes >= 1 && mes <= 12)
        mesFecha = mes;
    else
        mesFecha = 1;
}

void Fecha::establecerAno(int ano)
{
    anoFecha = ano;
}

int Fecha::obtenerDia(void)
{
    return diaFecha;
}

int Fecha::obtenerMes(void)
{
    return mesFecha;
}

int Fecha::obtenerAno(void)
{
    return anoFecha;
}

void Fecha::mostrarFecha(void)
{
    cout << "La fecha es: " << diaFecha << "/" << mesFecha << "/" << anoFecha << endl;
}
