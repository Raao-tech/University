#include <stdio.h>

int main(void)
{
    char     c1;
    char    c2;

    printf("Hi my friend! excuse me, but i need a character, please:\n");
    scanf("\n%c", &c1);
    printf("Thanks!, and i need other character:\n");
    scanf("\n%c", &c2);
    printf("Okk Thank you man!, now, your first character is: %c, and your second character is: %c. right?\n", c1, c2);
    printf("Well, the both character is separated in the ASSCI code for %d units\n", (int)(c2-c1));
    
    return (0);
}