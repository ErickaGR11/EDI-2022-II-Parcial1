//ARREGLOS: Coleccion de elementos
// Caracteristicas: todos sus elementos son del mismo tipo,
//tamaño definido,
//para accedera cada elemento se utilizan subindices.

//DATO!!: al imprimir los elementos del arreglo es necesario otro ciclo for

//PROGRAMA QUE DA EL PROMEDIO DE 5 CALIFICACIONES
#define MAX 3
#include <stdio.h>
int main()
{
    float promedio= 0;

    //DECLARANDO ARREGLO
    // tipo de dato + Nombre + [numero de elementos que tiene elemento]
    float calif[MAX];

    //PEDIMOS VALORES por medio del ciclo for
    for(int i=0; i<MAX; i++) {
        printf("Ingrese calificacion %d :\n", i);
        scanf("%f", &calif[i]);
        //hace el la sumatoria de todas las calificaciones
        promedio += calif[i];
    }
    //IMPRIMIMOS VALORES DEL ARREGLO
        for(int i=0; i<MAX; i++){
            printf(" %f, ",calif[i]);
        }

    //En el mismo printf se divide entre el numero total de calif
    printf("El promedio de las calificaciones es: %f \n", promedio/MAX);

//_________________________________________________________________
//PROGRAMA QUE ME DEVUELVE EL MAYOR DEL ELEMENTO
    printf("PROGRAMA QUE VERIFIQUE VALORES FLOTANTES ES MAYOR\n");
    float elemento;
    float mayor=0;
    //DECLARAR ARREGLO
    float mayorelemento[MAX];
    for (int i=0; i<MAX; i++)
    {
        printf ("Dame el elemento %d:", i);
        scanf("%f", &elemento);

        if (elemento>mayor){
            mayor= elemento;
        }
    }
    printf("El mayor es %f:\n", mayor);
    //__________________________
    //PROGRAMA QUE VERIFIQUE VALORES ENTEROS ES MENOR
    printf("PROGRAMA QUE VERIFIQUE VALORES ENTEROS ES MENOR\n");
    int menorelemento_entero[MAX];
    int valor;
    int menor=1000;
    for(int i=0; i<MAX; i++){
        printf("Dame el valor %d :",i  );
        scanf("%d", &valor);

        if (valor<menor){
            menor=valor;
        }
    }
    printf("El menor es: %d \n", menor);

    //_____________________
    //PROGRAMA QUE DE EL MENOR Y MAYOR
    printf("PROGRAMA QUE DE EL MENOR Y MAYOR DE LOS VALORES DADOS");
    int mayor_y_menor[MAX];
    int valores;
    int menores=1000;
    int mayores=0;
    for (int i=0; i<MAX; i++){
        printf("Dame valores enteros %d:", i);
        scanf("%d", &valores);

        if (valores<menores) {

            menores = valores;}
            if (valores>mayores){
                mayores= valores;
            }
        }

    printf("El mayor es: %d\n", mayores);
    printf("El menor es: %d", menores);
    return 0;

}