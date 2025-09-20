/* 
 The strlen function is used to determine the string length.
The strlen function is used in the following way:

myInteger = strlen (myString);

Where myString is the variable that contains the string from which we want to know its length and myInteger a variable of type int where the value is assigned.

Remember that to use strlen you have to include the header string.h

Write a program that performs the following tasks:

- Declare a variable of type string.

- Read the string.

- Remove the last character of the string by placing the ASCII 0 value in its place (remember that the user could write a word of any length so you have to use the strlen function to know in which position you have to place the value 0) .

- Show the truncated character string on the screen.

For example, if the user enters the string "Hello", it will be displayed on the screen "Hell" 
*/
#include <stdio.h>
#include <string.h>
#define length 64

int main()
{
	char	str_1[length];
	int		tam;

	printf("Write here anyword: ");
	scanf("%s", str_1);
	tam =  strlen(str_1);
	str_1[tam-1] = 0;

	printf("We altered your word, so which the last character, now not here.\n");
	printf("You can see it here: %s\n",str_1);
	
	return (0);
}