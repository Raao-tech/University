/* 
 NOTE: This exercise corresponds to one of the weekly tests of continuous evaluation of past courses.
Solving this exercise will help you to perform the next tests.
Write a program that asks for two initials of two people and their heights in cm and calculate the ideal weight and the average of the ideal weights according to the Lorentz formula. The Lorentz formula is the following:

weight = height - 100 - (height - 150) / 4

The messages must be shown as they appear in the following example of execution and in the same order (varying only according to the data entered by the user).

The following is an example of program execution:

Please enter the initial of the first person: P

Please enter the height of the first person: 176.5

Please enter the initial of the second person: L

Please enter the height of the second person: 180

The ideal weight of P is 69.9 kg.

The ideal weight of L is 72.5 kg.

The average of both ideal weights is 71.2 kg.
*/
#include <stdio.h>
#define ConstLor_1 100
#define ConstLor_2 150


int main(void)
{
    char        c1, c2;
    double      heigth_1, heigth_2;
    double      weigth_1, weigth_2;
    double      weigth_average;

    printf("Please enter the initial of the first person: ");
    scanf("\n%c",&c1);
    printf("\nPlease enter the height of the first person: ");
    scanf("\n%lf",&heigth_1);

    printf("Please enter the initial of the second person: ");
    scanf("\n%c",&c2);
    printf("\nPlease enter the height of the second person: ");
    scanf("\n%lf",&heigth_2);

    weigth_1 = (heigth_1 - ConstLor_1) - ((heigth_1-ConstLor_2)/4) ;
    weigth_2 = (heigth_2 - ConstLor_1) - ((heigth_2-ConstLor_2)/4) ;
    weigth_average = (weigth_1 + weigth_2)/2;

    printf("\nThe ideal weight of %c is %3.1lfKG.\n",c1,weigth_1);
    printf("\nThe ideal weight of %c is %3.1lfKg.\n",c2,weigth_2);
    printf("\nThe average of both ideal weights is %3.1lfKg.\n",weigth_average);    

    return (0);
}