#include <stdio.h>
/*Inicia la funcion de suma*/
int main()
{
    int num1;
    int num2;
    int resultado;
    printf("Ingrese el primer valor\n");
    scanf("%d", &num1);
    printf("ingrese el segundo valor\n");
    scanf("%d", &num2);
    resultado = num1 + num2;
    printf("el resultado de la suma es: %d\n", resultado);
    return 0;
}
/*Termina la funcion de suma*/
