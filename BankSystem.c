#include <stdio.h>
#include <windows.h>

struct BankAccountSystem{
    char nombre[20];
    int id;
    int dinero;
}userDefault={"Vasquez", 0, 45000},
newUser;


int main(){
    int menu;
    
    system("cls");
    printf("---------------------------------------------------\n\t");
    printf("[~] Sistema de banco [~]\n");
    printf("---------------------------------------------------\n");
    printf("[1] Crear una cuenta.\n");
    printf("[2] Iniciar seccion con la cuenta.\n");
    printf("[3] Depositar dinero.\n");
    printf("[4] Retirar Dinero\n");
    printf("[5] Transferir dinero a otra cuenta\n");
    printf("---------------------------------------------------\n");
    printf("\n> "); 
    scanf("%i", &menu);

    switch (menu)
    {
    case 1:
        system("cls");
        printf("\n");
        break;

    case 2:
    //login
        break;

    case 3:
    //depositar
        break;

    case 4:
    //retirar
        break;

    case 5:
    //transferir dinero
        break;
    
    default:
        printf("[!] Opcion incorrecta.");
        break;
    }


    return 0;
}
