/* 
Write a program that asks for three integer numbers and determine  the largest one. 
*/
#include <stdio.h>

int main()
{
    int numb_0, numb_1, numb_2, temp;

 
	printf("Hello my friend! i need you give me trhee a number, please(a b c): ");
    scanf("%d %d %d", &numb_0, &numb_1, &numb_2);

    if (numb_0 < numb_2)
    {
        temp = numb_0;
        numb_0 = numb_2;
        numb_2 = temp;
    } 
	if (numb_2 > numb_1)
    {
        temp = numb_2;
        numb_2 = numb_1;
        numb_1 = temp;
    }
	if (numb_1 > numb_0)
    {
        temp = numb_0;
        numb_0 = numb_1;
        numb_1 = temp;
    }

    printf("Ok, your trhee numbers are: %d > %d >%d\n the largest number is : %d\n", numb_0, numb_1, numb_2, numb_0);

	return (0);
}