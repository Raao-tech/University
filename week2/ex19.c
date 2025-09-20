/* 
 Strings are NOT copied from one variable to another using the = operator (as it does with numeric variables -int, float, double- or chars) To copy strings the strcpy function has to be used.

The strcpy function is used in the following way:

strcpy(destination, source);

Where source is the variable that contains the string that you want to copy and destination the string where you are going to copy.

Remember that to use strcpy you have to include the header string.h

Write a program that performs the following tasks:

- Declare two variables of type string

- Read the first string.

- Copy the string previously read in the second one

- Print the second string

- Use the strcmp function to compare both strings

- Show the numerical value of the comparison (if all the operations have been carried out correctly this should be 0).
*/
#include <stdio.h>
#include <string.h>
#define Length 64

int main()
{
    char str_1[Length], str_2[Length];

    printf("Write first sentence: ");
    scanf("%s", str_1);

    strcpy(str_2, str_1);

    printf("The first: %s\nThe Second: %s\n", str_1, str_2);

    printf("And after copy, we difference is: %d\n", strcmp(str_1,str_2));

    return (0);
}