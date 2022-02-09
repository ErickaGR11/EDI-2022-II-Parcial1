#include <stdio.h>
int main()
{
    int dias, horas, minutos;
    int segundos, d, h, m ;

    printf("Dame los dias");
    scanf("%d", &dias);
    printf("Dame las horas");
    scanf("%d", &horas);
    printf("Dame los minutos");
    scanf("%d", &minutos);

    d= (dias*24);
    h= (d+horas)*60;
    m= (h+minutos)*60;
    segundos= m;

    printf("Los segundos son: %d", segundos);

    return 0;
}