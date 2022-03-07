#include <stdio.h>
#define filas 4
#define columnas 3   //clave, precio, stock

void Mayor_precio(float arr[filas][columnas]);
void Menor_stock(float arr[filas][columnas]);
void Totales(float arr[filas][columnas]);
int main() {

    float arr[filas][columnas];

    for (int i = 0; i < filas; i++) {
        // for (int j = 0; j < columnas; j++) {

        printf("Dame la clave\n");
        scanf("%f", &arr[i][0]);

        printf("Dame el precio del producto: ");
        scanf("%f", &arr[i][1]);

        printf("Dame el stock");
        scanf("%f", &arr[i][2]);
    }

    printf("clave  ");
    printf("precio\t");
    printf("stock\t");
    printf("\n");
    for (int i = 0; i < filas; i++) {
        printf("%.0f \t", arr[i][0]);
        printf("%.2f\t", arr[i][1]);
        printf("%.0f\t", arr[i][2]);
        printf("\n");
    }
    //____________________
         Mayor_precio( arr);
         Menor_stock( arr);
         Totales( arr);
}

        void Mayor_precio(float arr[filas][columnas]) {
            float clave=arr[0][0];
            float mayor=0;

            for (int i = 0; i < filas; i++) {
                if (arr[i][1] > mayor) {
                    mayor = arr[i][1];
                    clave = arr[i][0];
                }
            }
            printf("Clave que tiene el precio mayor: %.0f \n", clave);

        }

        void Menor_stock(float arr[filas][columnas]) {
            float clave = arr[0][0];
            int menor = arr[0][2];

            for (int i = 0; i < filas; i++) {
                if (arr[i][2] < menor) {
                    menor = arr[i][2];
                    clave = arr[i][0];
                }
            }
            printf("Clave que tiene el menor stock: %.0f \n ", clave);
        }

        void Totales(float arr[filas][columnas]){
        float acum=0;

        for (int i = 0; i < filas; i++) {
                acum= acum+(arr[i][1]*arr[i][2]);
                //se multipica la columna 1(precio) por la columna 2(stock)
            }
            printf("Total: %.2f \n ", acum);
}