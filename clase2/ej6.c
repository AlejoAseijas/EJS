#include <stdio.h>
#include <math.h>

int getDiagonalPrincipal(int lado1, int lado2)
{
    return sqrt(pow(lado1, 2) + pow(lado2, 2));
}

int getPerimetro(int lado1, int lado2)
{
    return (2 * (lado1 + lado2));
}

int getSuperficie(int lado1, int lado2)
{
    return (lado1 * lado2);
}

int main()
{
    int lado1 = 0, lado2 = 0, dp = 0, perimetro = 0, sup = 0;

    printf("Ingrese 1er cateto: ");
    scanf("%d", &lado1);
    printf("Ingrese 2do cateto: ");
    scanf("%d", &lado2);

    dp = getDiagonalPrincipal(lado1, lado2);
    perimetro = getPerimetro(lado1, lado2);
    sup = getSuperficie(lado1, lado2);

    printf("La diagonal principal es: %d\n", dp);
    printf("El perimetro es: %d\n", perimetro);
    printf("La superficie es: %d\n", sup);

    return 0;
}