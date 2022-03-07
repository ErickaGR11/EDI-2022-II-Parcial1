#include <stdio.h>
#define MAX 3
void Arreglo1(float mayorelemento[MAX]);
void Arreglo2(float menorelemento[MAX]);

int main(){
   // float mayor;
    float arreglo[MAX];
    Arreglo1(arreglo);
    Arreglo2( arreglo);
}

    void Arreglo1(float mayorelemento[MAX]){
      float elemento;
      float mayor=0;
    for (int i=0; i<MAX; i++)
    {
        printf ("Dame el elemento %d:", i);
        scanf("%f", &elemento);

        if (elemento>mayor){
            mayor= elemento;
        }
    }
    printf("El mayor es %f:\n", mayor);
}

    void Arreglo2(float menorelemento[MAX]){
    float elemento;
    float menor=1000;
    for (int i=0; i<MAX; i++)
    {
        printf ("Dame el elemento %d:", i);
        scanf("%f", &elemento);

        if (elemento<menor){
            menor= elemento;
        }
    }
    printf("El menor es %f:\n", menor);
}