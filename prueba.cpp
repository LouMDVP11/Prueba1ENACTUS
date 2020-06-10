#include<stdio.h>
#include<stdlib.h>
int ingreso(int *num1, int *num2){
    printf("Ingresa el primer numero: ");scanf("%d", *num1);
    printf("Ingresa el segundo numero: ");scanf("%d", *num2);
}
int main(){
    printf("WENAAASS\nEste es el mi primer proyecto en Visual Code");
    int num1=0, num2=0;
    int op=0;
    do{ 
        system("cls");
        printf("1) MULTIPLICAR DOS NUMEROS\n");
        printf("2) SALIR\n");
        printf("Ingrese una opcion");scanf("%d", op);
        switch(op){
            case 1:
                ingreso(&num1, &num2);
                printf("\nLa multiplicacion de tus numeros es: %d\n\n", num1 * num2);
                system("pause");          
            break;
            case 2:
                printf("\nQue le vaya bien!\n\n");
                system("pause");  
            break;
            default:
                printf("Ha ingresado un valor no valido, intentelo de nuevo.\n\n");
                system("pause");  
            break;
        }

    }while(op!=2);
   
}
