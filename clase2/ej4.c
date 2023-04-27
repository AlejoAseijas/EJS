#include <stdio.h>

int getPerimetro(int lado1, int lado2, int lado3)
{
    return (lado1 + lado2 + lado3);
}

int main()
{
    int lado1 = 0, lado2 = 0, lado3 = 0, perimetro = 0;

    printf("Ingrese 1er lado: ");
    scanf("%d", &lado1);
    printf("Ingrese 2do lado: ");
    scanf("%d", &lado2);
    printf("Ingrese 3er lado: ");
    scanf("%d", &lado3);

    perimetro = getPerimetro(lado1, lado2, lado3);

    printf("%d\n", perimetro);

    return 0;
}