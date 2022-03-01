#include <stdio.h>
#define N 3
void imprimirInstruccion(int *valores, int *mayor1, int *menor1);
int main() {
    int valores, mayor1, menor1;

    imprimirInstruccion(&valores, &mayor1, &menor1);
    printf("Valor mayor es: %d\n ", mayor1);
    printf("Valor menor es: %d\n", menor1);
}
//
void imprimirInstruccion( int *valores, int *mayor1, int *menor1)
{

    int iterador;
    int mayor = 0;
    int menor = 1000;

    for (iterador=1; iterador<=N; iterador++)
    {
        printf("\nDame el valor %d \n", iterador);
        scanf("%d", valores);

        if (*valores>mayor)
            mayor= *valores;
        *mayor1=mayor;
        if (*valores<menor)
            menor= *valores;
        *menor1=menor;
    }

}