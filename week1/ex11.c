/* 
Write a program that asks for your age and calculates the lower and upper value of the cardiovascular range.

The lower value is 65% of the maximum number of beats per minute for your age. The upper value is 85% of that maximum. The maximum number of beats is equal to 220 minus your age.

For example, for a person of 25 years, the program output would be (notice that decimals are not shown):

Your cardiovascular range is between 127 and 166 
*/
#include <stdio.h>
#define FCMxM 208.1
#define FCMxH 208.7
#define MaxName 256

int main(void)
{
    int     age;
    char    sex;
    char    name[MaxName];
    double  fcM;
    double  fcm;


    printf("Hi, type your name, please:\n");
    scanf("\n%s",name);
    printf("Ok, %s, nice to meet you.  Now, i need your age:\n", name);
    scanf("%d",&age);
    printf("Perfect %s, so you are %d years old. To finally, what is your biology sex?(h/m):\n", name, age);
    scanf("\n%c",&sex);
    printf("Ok, Your sex is %c\n",sex);

    fcM = (sex=='h') ? (FCMxH - (0.73*age)) : (FCMxM - (0.77*age));
    fcm = (0.65 * fcM);

    
    printf("Ok, Your cardiovascular range is between %.0lf and %.0lf \n", fcm,fcM);



    return (0);




}