/* 
 Write a program that initializes a string with the text "Hello world".
The program must also modify the string to replace the space with the ASCII 0 
(that is, assign the value 0 to the position of the string where the space is located). 
Finally it has to print the string on the screen. 
*/
#include <stdio.h>
#define	Length 32

int main()
{
    char	string[Length] = "Hello world";
	string[5] = 0;
	printf("Now The new string is = %s\n",string);
    return (0);
}