#include <stdio.h>

int suma(int num1, int num2)
{
    return (num1 + num2);
}

int main()
{
    int num1 = 0, num2 = 0, num3 = 0, resultado = 0;

    printf("Ingrese 1 numero: ");
    scanf("%d", &num1);
    printf("Ingrese 2 numero: ");
    scanf("%d", &num2);

    resultado = suma(num1, num2);

    printf("Ingrese 3 numero: ");
    scanf("%d", &num3);

    resultado = suma(resultado, num3);

    printf("%d\n", resultado);

    return 0;
}