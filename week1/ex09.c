#include <stdio.h>

int main(void)
{
    int     num;
    char    c;

    printf("Hi my friend! excuse me, but i need a character please:\n");
    scanf("\n%c", &c);
    printf("Thanks!, and i need a number:\n");
    scanf("\n%d", &num);
    printf("Okk Thank you man!, now, your character is: %c, and your number is: %d. right?\n", c, num);
    printf("Well, if we get your character and minus your number we got it: %d that in ASCII is %c\n", (int)(c+num), (char)(c+num));
    
    return (0);
}