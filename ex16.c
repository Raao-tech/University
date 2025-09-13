/*
 NOTE: This exercise corresponds to one of the weekly tests of continuous evaluation of past courses.
Write a program that asks for a number between 1 and 5 and a character. The program must encrypt the character by adding the value of the entered number. As a result you must show the original character and its ASCII code along with the encrypted character and its ASCII code.

You can assume that the user will always enter a number between 1 and 5. The messages must be shown as they appear in the following example of execution and in the same order (varying only according to the data entered by the user):

Please enter a number (between 1 and 5): 3

Please enter a character: C

The character 'C' with ASCII code 67, if it is encrypted with the number 3, would become the character 'F' with the ASCII code 70  
*/
#include <stdio.h>

int main(void)
{
    char        c1;
    int         num;

    printf("Please enter a number (between 1 and 5): ");
    scanf("\n%d",&num);
    printf("\nPlease enter a character: ");
    scanf("\n%c",&c1);

    printf("\nThe character '%c' with ASCII code %d, if it is encrypted with the number %d, would become the character '%c' with the ASCII code %d\n", c1, (int)c1, num, ((char)(num+(int)c1)), (num+(int)c1));

    return (0);
}