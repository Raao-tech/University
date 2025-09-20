/* 
Write a C program to convert a character from lower to upper case and viceversa 
*/
#include <stdio.h>

int main()
{
    char key;

    printf("Please, type here your character(A --> Z): ");
    scanf("\n%c", &key);
    
    //Must Expand notation to if-else if-else and elimante cases what character is not alpha keys
    key = ((((int)key) >= (int)'a') && (((int)key) <= (int)'z')) ? ((int)key - ('a'-'A')) : ((int)key + ('a'-'A'));
    
    printf("Your Character is now: %c\n", key);

    return (0);
}