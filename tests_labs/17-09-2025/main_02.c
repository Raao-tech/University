/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
/*
2. Escribe un programa que lea la altura de una persona en cm y su peso en Kg y escriba su índice de masa corporal en la pantalla del ordenador. El índice de masa corporal se calcula de la siguiente manera:

imc = 10000 * peso / (altura * altura)
 
Solicita los datos al usuario del programa: primero el peso y luego la altura. Finalmente, aplica la fórmula, guarda el resultado en una variable y escribe el valor de la variable por pantalla utilizando dos decimales.
 
Lo que sigue es un ejemplo de ejecución del programa:
Introduzca peso (kg): 75.2
Introduzca altura (cm): 182

Indice = 22.70
*/
int main()
{
    int     height;
    double  weight, imc;
    
    printf("Introduzca peso (kg): ");
    scanf("%lf", &weight);
    
    printf("Introduzca altura (cm): ");
    scanf("%d", &height);
    
    imc = ((10000 * weight) / (height * height));
    
    printf("Indice = %lf\n", imc);
    
    return (0);
}