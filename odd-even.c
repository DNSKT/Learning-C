#include <stdio.h>

int main(){

    printf("voy a imprimir todos los numero pares de 0 a 100\n");
    int contador = 0;

    while(contador < 1000000){
        contador++;
        if(contador % 2 == 0){
            printf("\nPar\n");
        }
        else{
            continue;
        }
        printf("%d\n",contador);
        printf("\t%p\n", &contador);
    }
    return 0;
}
