#include <stdio.h>

int isTriangulo(int lado1, int lado2, int lado3)
{
    int status = 0;
    if (((lado1 + lado2) < lado3) || ((lado3 + lado2) < lado1) || ((lado1 + lado3) < lado2))
    {
        status = 1;
    }
    return status;
}

void getTypeTriangle(int lado1, int lado2, int lado3)
{
    if (isTriangulo(lado1, lado2, lado3) == 1)
    {
        if (lado1 == lado2 && lado2 == lado3)
        {
            printf("trinagulo equilatero");
        }
        else if (lado1 != lado2 && lado2 != lado3)
        {
            printf("trinagulo escaleno");
        }
        else
        {
            printf("trinagulo isoceles");
        }
    }
    else
    {
        printf("No es un trinagulo");
    }
}

int main()
{
    int lado1 = 0, lado2 = 0, lado3 = 0;

    printf("Ingrese 1 lado: ");
    scanf("%d", &lado1);
    printf("Ingrese 2 lado: ");
    scanf("%d", &lado2);
    printf("Ingrese 3 lado: ");
    scanf("%d", &lado3);

    getTypeTriangle(lado1, lado2, lado3);

    return 0;
}