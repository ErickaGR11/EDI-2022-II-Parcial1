#include <stdio.h>
#define N 20
void imprimirInstruccion(int valores);
int main() {
    int valores=0;

    imprimirInstruccion(valores);
}
    //
    void imprimirInstruccion(int valores)
    {
        //int valores;
        int iterador;
        int mayor = 0;
        int menor = 1000;

        for (iterador=1; iterador<=N; iterador++)
        {
            printf("\nDame el valor %d \n", iterador);
            scanf("%d", &valores);

            if (valores>mayor)
                mayor= valores;
            if (valores<menor)
                menor= valores;

        }
        printf("Valor mayor es: %d\n ", mayor);
        printf("Valor menor es: %d\n", menor);
    }
