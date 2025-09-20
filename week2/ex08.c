/* 
 By definition, a leap year is divisible by four, but not by one hundred, unless it is divisible by four hundred.
Write a program that asks for a year and displays whether it is a leap year or not. 
*/
#include <stdio.h>

int main()
{
    long year;

    printf("Please, Enter a year: ");
    scanf("%ld", &year);
	if (  (!(year%4) && (year%100)) || (!(year%4) && !(year%400)) )
		printf("The %ld is a leap year\n", year);
	else
		printf("The year introduce by you is not a leap year\n");
	
	return	(0);
	
}