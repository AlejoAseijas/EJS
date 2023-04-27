#include <stdio.h>
#include <math.h>

int getHipotenusa(int cateto1, int cateto2)
{
    return sqrt(pow(cateto1, 2) + pow(cateto2, 2));
}

int getPerimetro(int cateto1, int cateto2, int hip)
{
    return (cateto1 + cateto2 + hip);
}

int getSuperficie(int cateto1, int cateto2)
{
    return ((cateto1 * cateto2) / 2);
}

int main()
{
    int cateto1 = 0, cateto2 = 0, hip = 0, perimetro = 0, sup = 0;

    printf("Ingrese 1er cateto: ");
    scanf("%d", &cateto1);
    printf("Ingrese 2do cateto: ");
    scanf("%d", &cateto2);

    hip = getHipotenusa(cateto1, cateto2);
    perimetro = getPerimetro(cateto1, cateto2, hip);
    sup = getSuperficie(cateto1, cateto2);

    printf("La hipotenusa es: %d\n", hip);
    printf("El perimetro es: %d\n", perimetro);
    printf("La superficie es: %d\n", sup);

    return 0;
}