#include <stdio.h>
int main()
{
    float peso, precio, total;

    printf("Dame el precio por kilo");
    scanf("%f", &precio);
    printf("Dame el peso en kilos");
    scanf("%f", &peso);

    if (peso>=0 && peso<=2)
    {
        total= precio*peso;
        printf("No hay descuento, el total es: %.2f", total);
    }
    else if (peso>=2.01 && peso<=5)
    {
        total= (precio*peso);
        total= total-(total*0.10);
        printf("El total con descuento es: %.2f", total);
    }
    else if (peso>=5.01 && peso<=10)
    {
        total= (precio*peso);
        total= total-(total*0.15);
        printf("el total es: %.2f", total);
    }
    else if (peso>=10.01)
    {
        total= (precio*peso);
        total= total-(total*0.20);
        printf("El total es: %.2f", total);
    }
    return 0;
}