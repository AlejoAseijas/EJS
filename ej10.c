#include <stdio.h>

int getPlus(double valorAuto)
{
    int valorAutoK = 50;
    double porcentaje = 0.1;
    double plus = (porcentaje * valorAuto);
    return (plus + valorAutoK);
}

int getSueldo(double valorAuto, int qty)
{
    int sueldoMes = 500;

    double plus = (getPlus(valorAuto) * qty);

    return sueldoMes + plus;
}

int main()
{

    double valorVehiculo = 0;
    int qtyVehiculos = 0;

    printf("Ingrese valor del vehiculo: ");
    scanf("%lf", &valorVehiculo);

    printf("Ingrese cantidad de vehiculos: ");
    scanf("%d", &qtyVehiculos);

    printf("El sueldo es: %d\n", getSueldo(valorVehiculo, qtyVehiculos));

    return 0;
}
