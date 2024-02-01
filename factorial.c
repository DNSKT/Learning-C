#include <stdio.h>

long factorial(long x);
int main(){

    int numero;

    printf("Ingresa un numero: \n");
    scanf("%i", &numero);
    for (int i = 0; i <= numero; i++)
    {
        printf("Numero: %ld [%i] > %p \n", factorial(i), i, &numero);
        
    }
    
    return 0;
}

long factorial(long x){
    if(x <= 1){
        return 1;
    }
    else{
        return(x * factorial(x-1));
    }

}