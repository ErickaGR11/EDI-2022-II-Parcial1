#include <stdio.h>
void ejemplo_por_parametro_valor(int num);
int ejemplo_por_parametro_RETURN(int num);
void ej_parametro_por_referencia(int *numero);
void Funcion_mensaje();
int main()
{
    int num1= 5;

    // Este printf nos imprimira lo que esta asignado en primera instacincia es decir el 5
    printf ("Estoy imprimiendo el num1 en el MAIN %d\n", num1);
    ejemplo_por_parametro_valor(num1);

    //proceso de asignacion (=); el num 1 es igual al retorno de la funcion
    num1 = ejemplo_por_parametro_RETURN( num1);

    ej_parametro_por_referencia(&num1);
    printf("Estoy imprimiendo el numero por REFERENCIA: %d \n", num1);

    Funcion_mensaje();
    return 0;
}

    //funcion por parametro valor: imprime el valor dentro de la funcion

    void ejemplo_por_parametro_valor(int num)
    {
        printf("ingrese un numero\n");
        scanf("%d", &num);

        //como lo imprimo dentro de la funcion
        printf("Estoy imprimiendo el num dentro de la FUNCION: %d\n", num);


    }

    //funcion por parametro valor: regresa el valor por RETURN
    int ejemplo_por_parametro_RETURN(int num)
    {
        printf("ingrese un numero\n");
        scanf("%d", &num);

        //como lo imprimo dentro de la funcion
        printf("Estoy imprimiendo el num con RETURN: %d\n", num);

        return num;
    }

    //funcion parametro por referencia

    // asterisco_puntero: Variable que almacena la DIRECCION de memoria de una variable del mismo tipo de dato
    void ej_parametro_por_referencia(int *numero)
    {
    //copia la direccion e imprime el numero tal y como esta en el main
        printf("Numero declarado en el main: %d \n", *numero);
     //numero modificado
     *numero= *numero+1;
     //el valor modificado se devuelve en el main
    }

    //Una funcion no neccesariamente tiene que retornar algo, puede solo mostrar cosas
    void Funcion_mensaje()
    {
    printf("\nHola mundo!");
    }