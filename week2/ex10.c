/* 
Write a program that asks for three integer numbers and determine the smallest one. 
*/
#include <stdio.h>

int main()
{
    double  a, b, c, min, max;

    printf("Please, Type trhee numbers here:\n-------------\n");
    printf("First number: ");
    scanf("%lf", &a);
    printf("Second number: ");
    scanf("%lf", &b);
    printf("Third number: ");
    scanf("%lf", &c);

    max = b > c ? b : c;
    max = max > a ? max : a;

    min = b > c ? c : b;
    min = min > a ? a : min;

    printf("-------------\nThe Max number is: %.2lf\n", max);
    printf("The Minimun number is: %.2lf\n", min);
    return (0);
}