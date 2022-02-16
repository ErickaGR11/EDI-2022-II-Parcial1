#include <stdio.h>
int main()
{
    float lado1, lado2, lado3;

    printf("Dame el valor del lado 1 del triangulo");
    scanf("%f", &lado1);

    printf("Dame el valor del lado 2 del triangulo");
    scanf("%f", &lado2);

    printf("Dame el valor del lado 3 del triangulo");
    scanf("%f", &lado3);

    if (lado1 == lado2 && lado2==lado3 && lado3==lado1)
        printf("\n Es un triangulo de tipo equilatero");

    else if (lado1==lado2||lado1==lado3||lado2==lado3)
      printf("\nEs un triangulo de tipo isoceles");

    //DIFERENTE DE !=
    else if (lado1 != lado2 && lado2!=lado3 && lado3!=lado1)
     printf("\nEs un triangulo de tipo escaleno");

    return 0;
}