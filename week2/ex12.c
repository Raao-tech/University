/* 
Write a C program to find whether a character is a vowel or not 
*/
#include <stdio.h>

int main()
{
    char key;

    printf("Please, Type here any character: ");
    scanf("%c", &key);
    if(key == 'a' || key == 'e' || key == 'i' || key == 'o' || key == 'u' 
        || key == 'A' || key == 'E' || key == 'I' || key == 'O' || key == 'U')
        printf("It's a Vowel!! :D\n");
    else
        printf("It's not a Vowel. :C\n");
    return (0);
}