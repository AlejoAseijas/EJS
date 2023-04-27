#include <stdio.h>

int getSueldo(double vht, int tt)
{
    return (vht * tt);
}

int main()
{
    double vht = 0;
    int tt = 0;

    printf("Ingrese valor hora de trabajo: ");
    scanf("%d", &vht);
    printf("Ingrese tiempo trabajado: ");
    scanf("%d", &tt);

    printf("El sueldo es: %d\n", getSueldo(vht, tt));

    return 0;
}