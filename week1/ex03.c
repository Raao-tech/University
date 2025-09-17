#include <stdio.h>

int main(void)
{
    float   weight;
    int     heigth;
    float   bmi;

    weight = 0.00;
    heigth = 0; 

    printf("Please, enter your weight in Kg and your heigth in cm:\n");
    scanf("%f %d", &weight, &heigth);

    bmi = (10000*weight)/ (heigth*heigth);
    printf("Your weight is %.2f and your heigth is %d\n",weight, heigth);
    printf("for it your Body Mass Index is %.2f\n", bmi);
    return (0);
}
/* 
the solution in the UAMx is:

Why here it use double for weight and bmi if are down of the 15 or 16 digits?
for me is better use float for this data type. 

#include <stdio.h>

int main () 
{
    int height;
    double weight, bmi;
    
    printf ("Type your weight (kg): ");
    scanf ("%lf", &weight); 
    printf ("Type your height (cm): "); 
    scanf ("%d", &height); 
    
    bmi = weight over square height  
    bmi = 10000 * weight / (height * height); 
    printf ("body mass index = %.2lf\n", bmi); 
    
    return 0; 
}
*/