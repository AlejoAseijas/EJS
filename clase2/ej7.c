#include <stdio.h>

int suma(int num1, int num2)
{
    return (num1 + num2);
}

int resta(int num1, int num2)
{
    return (num1 - num2);
}

int producto(int num1, int num2)
{
    return (num1 * num2);
}

int main()
{
    int num1 = 0, num2 = 0;

    printf("Ingrese 1er num: ");
    scanf("%d", &num1);
    printf("Ingrese 2do num: ");
    scanf("%d", &num2);

    printf("La suma es: %d\n", suma(num1, num2));
    printf("El producto es: %d\n", producto(num1, num2));
    printf("La resta es: %d\n", resta(num1, num2));

    return 0;
}