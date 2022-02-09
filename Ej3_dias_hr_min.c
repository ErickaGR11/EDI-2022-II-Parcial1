#include <stdio.h>
int main()
{
    int dias, horas, minutos;
    int segundos;

    printf("Dame los segundos");
    scanf("%d", &segundos);

    dias= segundos/86400;
    segundos = segundos % 86400;

    horas = segundos / 3600;
    segundos = segundos % 3600;

    minutos = segundos / 60;
    segundos = segundos % 60;


    //printf("son: %d", segundos);
    printf( "Los segundos equivalen a\n %d dias\n %d horas\n %d minutos\n %d segundos\n", dias, horas, minutos, segundos );

    return 0;
}