#include <stdio.h>

struct carro{
        char modelo[15];
        long kilometraje;
        int puertas;
        float valor;
        char color[15];
   
}carro1={"Nissan", 35000, 2, 2500.50, "Azul"},
carro2;


int main(){
    printf("El modelo del carro es %s, Tienes %ld kilometros, Cuenta con %i puertas, su color es %s y su valor ronda los %f\n", carro1.modelo, carro1.kilometraje, carro1.puertas, carro1.color, carro1.valor);
    printf("Ingresa tu propio carro para vender\n");

    char modelo[20];
    long kilometraje;
    int puertas;
    float valor;
    char color[20];

    printf("Ingresa el modelo: \n");
    scanf("%s", &carro2.modelo);
    printf("Ingresa el kilometraje: \n");
    scanf("%ld", &carro2.kilometraje);
    printf("Ingresa la cantidad de puertas: \n");
    scanf("%i", &carro2.puertas);
    printf("Ingresa el valor: \n");
    scanf("%f", &carro2.valor);
    printf("Ingresa el color: \n");
    scanf("%s", &carro2.color);  


    printf("El modelo del carro es %s, Tienes %ld kilometros, Cuenta con %i puertas, su color es %s y su valor ronda los %f\n", carro2.modelo, carro2.kilometraje, carro2.puertas, carro2.color, carro2.valor);
    return 0;
}
