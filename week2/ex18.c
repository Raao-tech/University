/* 
 To compare if two strings are equal or different we must ALWAYS use the strcmp function. To use this function you must include the header string.h
This function has as arguments two strings and returns 0 if the strings are equal. An example of use is:

char cadena1[20], cadena2[20];

int valor;

...

...

valor = strcmp (cadena1, cadena2);

Write a program that reads two strings and writes the numeric value returned by strcmp.

To use this function you must include the header string.h at the beginning of the program.

The following is an example of program execution:

Enter a string: Thread

Enter another string: Hello

The value returned by the comparison of the strings is: -6
*/
#include <stdio.h>
#include <string.h>
#define Length 20

int main()
{
    char str_1[Length];
    char str_2[Length];

    printf("Hello User!! Please i need you to write two words here, please:\n");
    printf("First Word: ");
    scanf("%s", str_1);
    printf("Second Word: ");
    scanf("\n%s", str_2);

    printf("Ok, the difference numeric between the words is: %d\n 
        Warning! this difference is the ultimate characters are not equals \n", strcmp(str_1,str_2));

    return (0);
    
}