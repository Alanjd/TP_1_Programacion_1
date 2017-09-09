/*********************************************************************************
* Programa: T_P_Laboratorio 1
* Titulo: Calculadora
*
* Objetivo: Crear un programa que realize operaciones de calculadora, capaz de
*           tomar dos numeros de tipo entero y realizar operaciones de suma, resta
*           division, multiplicacion y factorial del primer operador. A su vez
*           realizar una operacion que imprima todas anteriores.
*
*
* Version:0.1 del 08 Septiembre de 2017.
*
* Autor: Jaime Alan Dario
* Division: 1° F
*
*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include "calculadora.h"



int main()

{

    int num1;
    int num2;
    int resultado1;
    int resultado2;
    int resultado3;
    long int resultado4;
    float resultado5;

    char seguir='s';
    int opcion=0;



    while(seguir=='s')
    {
        printf("      \n          Calculadora          \n");
        printf("\n1- Ingresar 1er operando (A=%d)\n",num1);
        printf("\n2- Ingresar 2do operando (B=%d)\n",num2);
        printf("\n3- Calcular la suma (A+B)= %d\n",resultado1);
        printf("\n4- Calcular la resta (A-B)= %d\n",resultado2);
        printf("\n5- Calcular la division (A/B)= %.2f\n",resultado5);
        printf("\n6- Calcular la multiplicacion (A*B)= %d\n",resultado3);
        printf("\n7- Calcular el factorial (A!= %ld)\n",resultado4);
        printf("\n8- Calcular todas las operaciones\n");
        printf("\n9- Salir\n");


        scanf("%d",&opcion);



        switch(opcion)

        {
            case 1:
            printf("Ingrese el 1er numero: ");
            scanf("%d",&num1);
            system("cls");

                continue;

            case 2:
            printf("Ingrese el 2do numero: ");
            scanf("%d",&num2);
            system("cls");

                continue;

            case 3:
            resultado1= suma(num1,num2);
            printf("\nLa suma es: %d", resultado1);
            system("cls");

                continue;


            case 4:
            resultado2= resta(num1,num2);
            printf("La resta es: %d", resultado2);
            system("cls");

                continue;


            case 5:
            if (num2<=0){
               printf("Error reingrese de nuevo el numero: ");
               scanf("%d",&num2);
            }
            resultado5= division(num1,num2);
            printf("La division es: %.2f", resultado5);
            system("cls");

                continue;


            case 6:
            resultado3= multiplicacion (num1,num2);
            printf("La multiplicacion es: %d", resultado3);
            system("cls");

                continue;

            case 7:
            resultado4=factorial(num1);
            printf("\nEl factorial es: %ld",resultado4);
            system("cls");

                continue;

            case 8:

            resultado1= suma(num1,num2);
            printf("\nLa suma es: %d", resultado1);

            resultado2= resta(num1,num2);
            printf("\nLa resta es: %d", resultado2);

            resultado5= division(num1,num2);
            printf("\nLa division es: %.2f", resultado5);

            resultado3= multiplicacion (num1,num2);
            printf("\nLa multiplicacion es: %d", resultado3);

            resultado4=factorial(num1);
            printf("\nEl factorial es: %ld\n\n",resultado4);

            system("pause");
            system("cls");

                continue;

            case 9:
                seguir = 'n';
                break;
        }



}
 return 0;
}
