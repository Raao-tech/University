/* 
 NOTE: This exercise corresponds to one of the weekly tests of continuous evaluation of past courses.
Write a program that asks for a height in cm, an age in years and the initial of a name. The program must calculate the ideal weight according to the Perroult formula. According to this author, the ideal weight is calculated as follows:

weight = height - 100 + (9*age)/100.0

The height can be a number with decimals. The age will be a whole number. Use three decimals to show the weight and one to show the height. The messages must be shown as they appear in the following example of execution and in the same order (varying only according to the data entered by the user).

The following is an example of program execution:

Please enter the height in cm: 175.5

Please enter the age in years: 18

Finally, enter the initial of the name: C

The ideal weight of C, who measures 175.5 cm and is 18 years old, is 77,120 kg.
*/
#include <stdio.h>
#define ConstPer_1 100.0
#define ConstPer_2 9


int main(void)
{
    char        c1;
    int         age;
    double      heigth_1;
    double      weigth_ideal;


    printf("Please enter the height in cm: ");
    scanf("\n%lf",&heigth_1);
    printf("\nPlease enter the age in years: ");
    scanf("\n%d",&age);
    printf("\nFinally, enter the initial of the name: ");
    scanf("\n%c",&c1);

    weigth_ideal = (heigth_1 - (int)ConstPer_1) + ((ConstPer_2*age)/ConstPer_1) ;

    printf("The ideal weight of %c, who measures %.1lf cm and is %d years old, is %.3lf kg.\n", c1, heigth_1, age, weigth_ideal);

    return (0);
}