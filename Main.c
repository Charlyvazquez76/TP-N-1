#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include "funciones.h"


#define MAGENTA    "\x1b[35m"
#define CYAN       "\x1b[36m"


int main()


{

    int opcion=0;
    char opcionNumero[5];
    char numero[5];
    int f;
    float numerovalido;


    int a=0,b=0;
    system("cls");
    system("COLOR 5A");


  //printf(MAGENTA "INTEGRANTES!: \n");
    Sleep(500);
    printf("\n   ================================================= \n");
    printf("\n                    TEAM CHINA                       \n");
    printf("\n   ================================================= \n");

    printf("\n                   -Anabella Alexa Agazzi            \n");


    printf("\n                   -Martina Larroza                  \n");


    printf("\n                   -Ignacio Federico Correa          \n");


    printf("\n                   -Carlos Vazquez                   \n");


    printf("\n                   -Brian Lopez                      \n");

    Beep(1568,200);
    Beep(1568,200);
    Beep(1568,200);
    Beep(1245,1000);
    Beep(1397,200);
    Beep(1397,200);
    Beep(1397,200);
    Beep(1175,1000);

//system("cls");

system("COLOR B5");


getch();

      do
     {
        system("cls");
        printf("\n   ================================================  \n");
        printf("\n               ==>  MENU DE OPCIONES <==              \n");
        printf("\n   ================================================  \n");
        printf("                    X:%d",a);  printf(" Y:%d",b);

        printf("\n   ================================================    \n");
        printf("*\n        1- Ingresar 1er operando (A=x)               *\n");
        printf("*\n        2- Ingresar 2do operando (B=y)               *\n");
        printf("*\n        3- Calcular la suma (A+B)                    *\n");
        printf("*\n        4- Calcular la resta (A-B)                   *\n");
        printf("*\n        5- Calcular la multiplicacion (A/B)          *\n");
        printf("*\n        6- Calcular la division (A*B)                *\n");
        printf("*\n        7- Calcular el factorial (A!)                *\n");
        printf("*\n        8- Calcular todas las operaciones            *\n");
        printf("*\n        9- Salir                                     *\n");
        printf("\n   ================================================  \n");



        printf("\nIngrese la opcion: \n");
        scanf("%s",&opcionNumero);
        Beep(500,200);

        f =validar_numero(opcionNumero);

        if (f == 0)
        {

        }
        else
        {

            numerovalido=atoi(opcionNumero);      //atoi; convierte los numeros de cadenas en numeros enteros
            opcion = numerovalido;
        }

        switch(opcion)
        {
        case 1:

            system("cls");
            printf("ingrese valor de X: ");
            scanf("%s",numero);
            Beep(500,200);

            f =validar_numero(numero);

            if (f == 0)
            {

            }
            else
            {
                numerovalido=atoi(numero);//atoi; convierte los numeros en cadena en numeros enteros
                a = numerovalido;
            }

            //getch();
            break;

        case 2:
            system("cls");
            printf("ingrese valor de Y: ");
            scanf("%s",numero);
            Beep(500,200);

            f =validar_numero(numero);

            if (f == 0)
            {

                // printf("no numero");
            }
            else
            {
                //printf("numero");
                numerovalido=atoi(numero);
                b = numerovalido;
            }

            break;

        case 3:
            system("cls");
            suma(a,b);
            getch();

            break;

        case 4:
            system("cls");
            resta(a,b);
            getch();
            break;

        case 5:
            system("cls");
            multiplicacion(a,b);
            getch();
            break;

        case 6:
            system("cls");
            division(a,b);
            getch();
            break;

        case 7:
            system("cls");
            factorial(a);
            getch();
            break;

        case 8:
            system("cls");
            suma(a,b);
            resta(a,b);
            multiplicacion(a,b);
            division(a,b);
            factorial(a);
            getch();
            break;

        case 9:
            break;

        default:
            system("cls");
            printf("El valor ingresado es incorrecto. \n");
            Beep(300,100);
            Beep(200,800);
            getch();
            break;


        }
    }

    while(opcion!=9);

    return 0;
}



//FUNCIONES



void suma(int num1, int num2)
{

    int resultado = 0;

    resultado = num1+num2;

    printf("La suma de X y Y es: %d",resultado);
    Beep(500,200);
    printf("\n \n");

}

void resta(int num1, int num2)
{

    int resultado = 0;

    resultado = num1-num2;

    printf("La resta de X y Y es: %d",resultado);
    Beep(500,200);
    printf("\n \n");
}

void division(float num1, float num2)
{

    float resultado = 0;

    resultado = num1/num2;

    if(num2==0)
    {
        printf("La division de X y Y no se puede realizar...");
        printf("\n \n");
    }
    else
    {

        printf("La division de X y Y es: %.1f",resultado);
        Beep(500,200);
        printf("\n \n");
    }
}


void multiplicacion(int num1, int num2)
{

    int resultado = 0;

    resultado = num1*num2;

    printf("La multiplicacion de X y Y es: %d",resultado);
    Beep(500,200);
    printf("\n \n");
}

void factorial(int num1)
{
    int resultado= 1;

    for(int i=1; i<=num1; i++)
    {

        resultado = resultado*i ;

    }
    if(resultado!= 1)
    {
        printf("El factorial de X es: %d",resultado);
        Beep(500,200);
        printf("\n \n");
    }
    else
    {
        printf("El factorial de X es: 0");
        Beep(500,200);
        printf("\n \n");
    }
}

int validar_numero(char numero[])
{
    int i;
    for(i=0; i<strlen(numero); i++)   //strlen; sirve para contan la cantidad de letras
    {
        if(!(isdigit(numero[i])))     //isdigit; se activa cuando cuando se ingresan numeros
        {
            system("cls");
            printf("Ingresa solo NUMEROS ENTEROS!!\n");
            Beep(300,100);
            Beep(200,800);

            return 0;
        }
    }
    return 1;
}
