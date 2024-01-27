#include <stdio.h>
#define NUM(x) (char)x 
#define CAR(x) (int)x

int main(){
/*     int a = 80;
    printf(" entero %i\n flotante %.2f\n doble %.3f\n caracter %c\n", a, (float)a, (double)a, (char)a);
    
    int b;
    printf("ingrese un numero\n");
    scanf("%d", &b);
    printf("el caracter es: %c\n", (char)b);
    
    char c;
    printf("ingrese un caracter\n");
    scanf("%s", &c);
    printf("el numero es: %i\n", (int)c); */


    int a;
    printf("> ingrese un numero\n\t");
    scanf("%d", &a);
    printf("el caracter es: %c\n", NUM(a));

    int b;
    printf("> Ingrese un caracter\n\t");
    scanf("%s", &b);
    printf("el numero es: %i\n", CAR(b));
    
    return 0;
}
