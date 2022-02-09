#include <stdio.h>
int main()

{
    float precio, descuento, total;
    printf("Dame el precio del producto");
    scanf("%f", &precio);
    printf("Dame el porcentaje de descuento en entero, ej. 25");
    scanf("%f", &descuento);

     total = precio- ((descuento/100)*precio);

    printf("El total es: %.2f", total);

    return 0;
}