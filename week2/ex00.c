/* 
 Write a program that asks for your age and prints 1 if you are above the legal age and your age is not a multiple of three.
The program will show a 0 otherwise.

Check what is shown if the following values are entered: 15, 17, 20 and 21.

NOTE: Do not use the "if" statement for this exercise.
*/
#include <stdio.h>

int main()
{
    int age;

    printf("Hi! Please, type your age: ");
    scanf("%d", &age);
    printf("Ok, your age is: %d\n", age);
    printf("%d\n",(((age % 3)) && (age > 17)));

    return (0);
}