#include <stdio.h>
#define MAX 20
#define N_MAX 5
void Sumatotal(int valores [N_MAX]);
void Sumapar(int valores[N_MAX]);
void SumaPosicion (int valores[N_MAX]);
int main() {
    int valores[N_MAX];
    // int arreglo;
    // int suma;
    //PEDIMOS VALORES por medio del ciclo for
    for (int i = 0; i < N_MAX; i++) {
        printf("Ingrese valores %d :\n", i);
        scanf("%d", &valores[i]);
        //CICLO ANIDADO CONDICION DE LOS VALORES
        while (valores[i] < 0 || valores[i] > MAX) {
            printf("Ingrese un valor entre el 1 y el MAX: ");
            scanf("%d", &valores[i]);
        }
    }

    //IMPRIMIMOS VALORES por medio del ciclo for
    printf("[");
    for (int i = 0; i < N_MAX; i++) {
        printf("%d,", valores[i]);
    }
    printf("]");

    SumaPosicion ( valores);
//______________________________________
    Sumapar( valores);
    //__________________________________
    Sumatotal( valores);
    //__________________________________________

}
void Sumatotal(int valores[N_MAX]) {
    int acumulado = 0;


    for (int i = 0; i < N_MAX ; i++) {
        while (acumulado<MAX)
            acumulado= valores[i] + acumulado;
        if (acumulado>MAX)
            acumulado=acumulado- valores[i];
        }
       printf("\nsuma total <= MAX : %d ", acumulado);

    }
//}
void Sumapar(int valores[N_MAX]) {
    int suma_par = 0;
    for (int i = 0; i < N_MAX; i++) {
        if (valores[i] % 2 == 0) {
            suma_par = valores[i] + suma_par;
        }
    }
    printf("\nsuma par: %d", suma_par);
}

void SumaPosicion (int valores[N_MAX])
{
    int suma_posicion = 0;
    for (int i = 0; i < N_MAX; i++) {
        if (i % 2 == 0) {
            suma_posicion = valores[i] + suma_posicion;
        }
    }
    printf("\nsuma posicion par: %d", suma_posicion);
}