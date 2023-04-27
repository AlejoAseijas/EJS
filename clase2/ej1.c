#include <stdio.h>

int suma(int num1, int num2)
{
    return (num1 + num2);
}

int main()
{
    int a = 0, b = 0, c = 0;

    printf("Ingrese 1 numero: ");
    scanf("%d", &a);
    printf("Ingrese 2 numero: ");
    scanf("%d", &b);

    c = suma(a, b);

    printf("%d\n", c);

    return 0;
}