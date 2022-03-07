#include <stdio.h>

#define FILAS 4
#define COLUMNAS 3
void captura1(int arr1[][COLUMNAS]);
void captura2(int arr2[][COLUMNAS]);
void imprime(int arr1[][COLUMNAS]);
void operacion(int arr1[][COLUMNAS], int arr2[][COLUMNAS], int arr3[][COLUMNAS]);

int main() {

    int arr1[FILAS][COLUMNAS];
    int arr2[FILAS][COLUMNAS];
    int arr3[FILAS][COLUMNAS];
    //
    printf("CAPTURA ARREGLO 1:\n");
    captura1(arr1);
    printf("ES EL ARREGLO 1:\n");
    imprime(arr1);
    printf("CAPTURA ARREGLO 2:\n");
    captura2(arr2);
    printf("ES EL ARREGLO 2:\n");
    imprime(arr2);

    operacion(arr1, arr2, arr3);
    printf("El resultado de la suma es:\n");
    imprime(arr3);



}
    void captura1(int arr1[][COLUMNAS]) {

        int contR, contC;
        for (contR = 0; contR < FILAS; contR++) {
            for (contC = 0; contC < COLUMNAS; contC++) {
                printf("Dame el dato %d %d: \n  ", contR, contC);
               // printf("Dame el dato %d : ", contC);
                scanf("%d", &arr1[contR][contC]);


            }
        }
    }
            void imprime(int arr1[][COLUMNAS]){
              int contR, contC;
              for (contR = 0; contR < FILAS; contR++) {
                  for (contC = 0; contC < COLUMNAS; contC++) {
                      printf("%d\t", arr1[contR][contC]);
                  }
                  printf("\n");
              }
                printf("\n");

}



    void captura2(int arr2[][COLUMNAS]) {
        int contR, contC;
        for (contR = 0; contR < FILAS; contR++) {
            for (contC = 0; contC < COLUMNAS; contC++) {
                printf("Dame el dato %d %d: \n  ", contR, contC);
                scanf("%d", &arr2[contR][contC]);
            }
        }
    }

    void operacion(int arr1[][COLUMNAS], int arr2[][COLUMNAS], int arr3[][COLUMNAS]) {
        int contR, contC;
        for (contR = 0; contR < FILAS; contR++) {
            for (contC = 0; contC < COLUMNAS; contC++) {
                arr3[contR][contC] = arr1[contR][contC] + arr2[contR][contC];
            }
        }
    }