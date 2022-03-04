#define MAX 3
#include <stdio.h>
void arreglo_almacen(int arr[MAX]);
void imprime_arreglo(int *arreglo);
void FuncionSumaPares(int arr[MAX], int *sumapar);
void Sumar(int arr[MAX], int *result);
int main() {
    //int valor;
    int arreglo;
    int resultadosumapar; int resultado;
    arreglo_almacen(&arreglo);
    imprime_arreglo(&arreglo);
    FuncionSumaPares(arreglo, &resultadosumapar);
    printf("suma par %d", resultadosumapar);
    Sumar( arreglo,&resultado);
    printf("suma %d", resultado);
}

    //ARREGLO
    void arreglo_almacen(int arr[MAX])
    {
        for (int i=0; i< MAX; i++)
        {
            printf("ingrese un valor de la posicion %d\n", i);
            scanf("%d", &arr[i]);
            //if (valor>0 && valor<=100){
           }
    }

    void imprime_arreglo(int *arreglo) {
        for (int i = 0; i < MAX; i++)
        {
            printf("%d", arreglo[i]);
        }
    }

    void FuncionSumaPares(int arr[MAX], int *sumapar)
    {
    int suma=0;
    for (int i=0; i<MAX; i++)
    {
        if (arr[i]%2==0)
        {
            *sumapar = suma+ arr[i];
        }
    }

    }

    void Sumar(int arr[MAX], int *result)
    {
    *result=0;
    for (int i=0; i<MAX; i++)
    {
        if (arr[i]>1 && arr[i] <=100)
        {
            *result= result+ arr[i];
        }
    }
}