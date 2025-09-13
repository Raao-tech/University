/* 
 NOTE: This exercise corresponds to one of the weekly tests of continuous evaluation of past courses. Solving this exercise will help you to perform the next tests.
Write a program that requests two characters one by one. The program must add the ASCII code of both characters and show the result, including the ASCII code of each of them.

The messages must be shown as they appear in the following example of execution and in the same order (varying only according to the data entered by the user).

The following is an example of program execution:

Please, enter a character: A

Please, enter another character: L

If we add the ASCII code of the character A that is 65 with the ASCII code of the character L that is 76 we get the number 141
*/
#include <stdio.h>

int main(void)
{
    char    c1;
    char    c2;


    printf("Please, type one char: ");
    scanf("\n%c",&c1);
    printf("Thanks, now, please type a second char: ");
    scanf("\n%c",&c2);
    printf("Perfect, your first char is \33[33m%c\33[00m and your second is \33[33m%c\33[00m\n", c1,c2);
    printf("So, in ASCII your character are %d and your second is %d\n", (int)c1,(int)c2);
    printf("And its plus is \33[33m%d\33[00m.\n", (int)(c1 + c2));

    return (0);
}