#include <stdio.h>
int main() {
    int hora, minutos;
    printf("Dame la hora");
    scanf("%d", &hora);

    printf("Dame los minutos");
    scanf("%d", &minutos);

    if (hora >= 0 && hora <= 11 && minutos >= 0 && minutos <= 59)
        printf("Buenos dias");
    else if (hora >= 12 && hora <= 17 && minutos >= 0 && minutos <= 50)
        printf("Buenas tardes");
    else if (hora >= 18 && hora <= 23 && minutos >= 0 && minutos <= 59)
        printf("Buenas noches");
    else
        printf("La hora no es valida");
    return 0;
}