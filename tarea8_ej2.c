#include <stdio.h>
#define FILAS 4
#define COLUMNAS 3
void ARR1(float notas[][COLUMNAS]);
void imprime(float arr3[][COLUMNAS]);
void Sumafilas(float arr3[][COLUMNAS]);
void Sumacolumnas(float arr3[][COLUMNAS]);

int main() {
    float notas[FILAS][COLUMNAS];
    ARR1(notas);
    printf("Los datos dados son:\n");
    imprime(notas);
    printf("Los promedios filas son:\n");
    Sumafilas(notas);
    printf("\n");
    printf("Los promedios columnas son:\n");
    Sumacolumnas( notas);
}

void ARR1(float notas[][COLUMNAS]) {
    int contR, contC;
    for (contR = 0; contR < FILAS; contR++) {
        for (contC = 0; contC < COLUMNAS; contC++) {
            printf("Dame el dato %d %d: \n  ", contR, contC);
            scanf("%f", &notas[contR][contC]);
        }
    }
}
void imprime(float arr3[][COLUMNAS]){
    int contR, contC;
    for (contR = 0; contR < FILAS; contR++) {
        for (contC = 0; contC < COLUMNAS; contC++) {
            printf("%.2f\t", arr3[contR][contC]);
        }
        printf("\n");
    }
    printf("\n");

}

void Sumafilas(float arr3[][COLUMNAS]){
    int contR, contC;
    for (contR = 0; contR < FILAS; contR++) {
        float sumarfila=0;
        float prom=0;
        for (contC = 0; contC < COLUMNAS; contC++) {

            sumarfila = sumarfila+  arr3[contR][contC];
            prom=sumarfila/COLUMNAS;
        }
        printf(" %.2f\t", prom);
    }
}
void Sumacolumnas(float arr3[][COLUMNAS]){
    int contR, contC;
    for (contC = 0; contC < COLUMNAS; contC++) {
        float sumarcolumna=0;
        float prom=0;
        for (contR = 0; contR < COLUMNAS; contR++) {
            sumarcolumna = sumarcolumna+  arr3[contR][contC];
            prom=sumarcolumna/FILAS;
        }
        printf(" %.2f\t", prom);

    }
}
    void imprimefilas(float arr3[][COLUMNAS]){
    int contR, contC;
    for (contR = 0; contR < FILAS-1; contR++) {
        for (contC = 0; contC < COLUMNAS; contC++) {
            printf("%.2f\t", arr3[contR][contC]);
        }
        printf("\n");
    }
    printf("\n");

}
