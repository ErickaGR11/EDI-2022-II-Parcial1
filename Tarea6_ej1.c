#include <stdio.h>

int calculaNumeroPefecto (int numero);
int main() {
    int numero;
    int numeroPerfecto;

    printf("Dame un numero");
    scanf("%d", &numero);

    numeroPerfecto = calculaNumeroPefecto(numero);
    if (numeroPerfecto == 1)
        printf("Es un numero perfecto %d", numero);
    else
        printf("No es un numero perfecto %d", numero);
    return 0;
}

    int calculaNumeroPefecto(int numero)
    {
        int numeroPerfecto;
        int numeroValidar = numero;
        int contador = 0;
        int i=1;

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


