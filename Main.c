#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <conio.h> 
#include "funciones.h"

#define MAGENTA "\x1b[35m" #define CYAN "\x1b[36m" #define RESET "\x1b[0m"

int main() {

int opcion=0;
char opcionNumero[5];
char numero[5];
int f;
float numerovalido;


int a=0,b=0;
system("cls");


// getch();
printf(MAGENTA"INTEGRANTES!: \n");
Sleep(500);

printf("\n            -Anabella Alexa Agazzi\n");
Beep(1568,200);

printf("\n            -Martina Larroza\n");
Beep(1568,200);

printf("\n            -Ignacio Federico Correa\n");
Beep(1568,200);

printf("\n            -Carlos Vazquez\n");
Beep(1568,200);

printf("\n            -Brian Lopez\n");
Beep(1568,200);

getch();

do
{
    system("cls");
    printf("\n*************Bienvenidos*********************\n")
    printf(CYAN"\n================================================\n");
    printf("\n       ==>  MENU DE OPCIONES <==                  \n");
    printf("\n================================================= \n");
    printf("X:%d",a);
    printf(" Y:%d",b);
    printf("\n");

    printf("\n1- Ingresar 1er operando\n");//(A=x)
    printf("\n2- Ingresar 2do operando\n");// (B=y)
    printf("\n3- Calcular la suma\n");//  (A+B)
    printf("\n4- Calcular la resta\n");// (A-B)
    printf("\n5- Calcular la multiplicacion\n"); // (A/B)
    printf("\n6- Calcular la division\n");// (A*B)
    printf("\n7- Calcular el factorial\n"); //(A!)
    printf("\n8- Calcular todas las operaciones\n");
    printf("\n9- Salir\n\n");

    printf("\nIngrese la opcion: \n");
    //scanf("%d",&opcion);
    scanf("%s",&opcionNumero);
    Beep(500,200);
    f =validar_numero(opcionNumero);

    if (f == 0)
    {

    }
    else
    {

        numerovalido=atoi(opcionNumero);//atoi; convierte los numeros de cadenas en numeros enteros
        opcion = numerovalido;
    }
    // getch();

    switch(opcion)
    {
    case 1:

        system("cls");
        printf("ingrese valor de X: ");
        // scanf("%f",&a);
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

        // getch();
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
        printf("El valor ingresado es incorrecto..\n");
        Beep(300,100);
        Beep(200,800);
        getch();
        break;


    }
}

while(opcion!=9);

return 0;
}

////////////////////////////////////////////////// //FUNCIONES ///////////////////////////////////////////////// 
void suma(int num1, int num2) {

int resultado = 0;

resultado = num1+num2;

printf("La suma de X y Y es: %d",resultado);
Beep(500,200);
printf("\n \n");
} 
//////////////////////////////////////// 
void resta(int num1, int num2) {

int resultado = 0;

resultado = num1-num2;

printf("La resta de X y Y es: %d",resultado);
Beep(500,200);//revisar float
printf("\n \n");
} 
//////////////////////////////////////// 
void division(float num1, float num2) {

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

void multiplicacion(int num1, int num2) {

int resultado = 0;

resultado = num1*num2;

printf("La multiplicacion de X y Y es: %d",resultado);
Beep(500,200);
printf("\n \n");
}

void factorial(int num1) { int resultado= 1;

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

int validar_numero(char numero[]) { int i; for(i=0; i<strlen(numero); i++)// strlen; sirve para contan la cantidad de letras { if(!(isdigit(numero[i])))//isdigit; se activa cuando cuando se ingresan numeros { system("cls"); printf("Ingresa solo NUMEROS ENTEROS!!\n");; Beep(300,100); Beep(200,800);

        return 0;
    }
}
return 1;
}
