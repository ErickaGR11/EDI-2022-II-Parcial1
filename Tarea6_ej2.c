#include <stdio.h>
int calculaNumeroPefecto (int numero);
int main() {
    int numero=1;
    int numeroPerfecto;

    while (numero!=0) {
        printf("Dame un numero");
        scanf("%d", &numero);
        numeroPerfecto = calculaNumeroPefecto(numero);
        if (numeroPerfecto == 1)
            printf("Es un numero perfecto %d \n", numero);
        else
            printf("No es un numero perfecto %d \n", numero);
    }
}
int calculaNumeroPefecto(int numero)
{
    int numeroPerfecto;
    int numeroValidar = numero;
    int contador = 0;
    int i=1;
    //int numero perfecto;
    while (i<numeroValidar) {
        if (numeroValidar % i == 0)
        {
            contador+=i ;
        }
        i++;
    }
    if (contador == numeroValidar)
        numeroPerfecto = 1;
    else
        numeroPerfecto = 0;
    return numeroPerfecto;
}