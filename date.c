#include <stdio.h>
#define year 2024
#define CUBO(x) x*x*x

int main(){
    int edad;
    int calcular;
    int a = 8;
    printf("el cubo es: %d\n", CUBO(a));
    printf("Digite su edad: \n");
    scanf("%d", &edad);
    calcular = year - edad;
    printf("naciste en: %d\n", calcular);

    if(edad >= 18){
        printf("Eres mayor de edad!\n");
    }
    else{
        printf("no eres mayor de edad\n");
    }
    return 0;
}