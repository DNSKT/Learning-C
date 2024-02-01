#include <stdio.h>

int main(){

    //declaro las variables

    int array; //esto es el tamaño del arreglo
    int arrayM; //lo mismo pero del otro arreglo
    int menu; //esto es para seleccinar que arreglo hacer

    //menu

    printf("[ ~ ] Seleccione los arreglos: \n");
    printf("\t< 1 > Normal\n");
    printf("\t< 2 > Multidimensional\n");
    scanf("%i", &menu);
    switch(menu)
    {
    case 1:{

    printf("tamano del arreglo: \n");
    scanf("%i", &array);
    int arreglo[array]; //lista los objetos que tiene dentro de array para que funcione el bucle for

    for (int i = 0; i < array; i++){
        printf("Ingrese el valor: %i\n",i+1);
        scanf("%i", &arreglo[i]);   //ya lo arregle marcos
    }
    printf("los valores del arreglo son: \n");
    for (int i = 0; i < array; i++){
        printf("- %i\n", arreglo[i]);
        }

    break;

    }

    case 2:{










    break;

    }
    
    
    default:
    printf("Opcion incorrecta\n");
    break;
    }
    return 0;
}
