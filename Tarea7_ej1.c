#include <stdio.h>

#define  MAX 100

void leer_cadena (char cadena[MAX]);
void leer_caracter (char *caracter);
void cuentacaracter(char cadena[MAX], char c, int *cuenta);

int main()
{
    char cadena[MAX];
    char caracter;
    int cuenta;


    leer_cadena (&cadena[MAX]);
    leer_caracter ( &caracter);
    cuentacaracter( &cadena[MAX],  caracter,  &cuenta);
    printf("es %d ", cuenta);
    return 0;
}
void leer_cadena (char cadena[MAX])
{
    printf("Dame la cadena\n");
    scanf("%[^\n]", cadena);
    // printf("La cadena es: %s ", cadena);
    // printf("\n");

}
void leer_caracter (char *caracter)
{
    fflush(stdin);
    printf("Dame un caracter \n");
    scanf("%s", caracter);
    //  printf("El caracter es: %c", caracter);
}

void cuentacaracter(char cadena[MAX], char c, int *cuenta)
{
    for(int i=0; i <= MAX -1 ; i++)
        if(cadena[i] == c)
            *cuenta += 1;
}