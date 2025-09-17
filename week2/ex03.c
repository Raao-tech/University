/* 
 Write a program that asks the user for his height in centimeters and weight in kilograms, 
 calculates the body mass index and issue one of these three diagnoses: underweight, normal 
 weight or overweight.
The body mass index is considered normal if it is in the interval [21,25].

The body mass index is calculated as follows:

bmi = 10000 * weight / (height * height) 
*/
#include <stdio.h>

int main()
{
    int     height;
    double  bmi, weight;

    printf("Hello! Please, Enter the following information:\n");
    printf("Your weidght(Kg): ");
    scanf("%lf", &weight);
    printf("\nYour height(cm): ");
    scanf("\n%d", &height);
    bmi = (10000 * weight) / (height * height);
    printf("\nYour Body Mass Index is: %.2lf\n", bmi);
    if(bmi < 21)
        printf("You are underweight\n");
    else if (bmi > 25)
        printf("You are overweight\n");
    else
        printf("You have a normal weight\n");

    return (0);
}