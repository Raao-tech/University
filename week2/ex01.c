/* 
 Modify the previous exercise so that instead of a 1, the message "You are of age and your age is not a multiple of three" is displayed. Also, instead of a 0, the message "You are a minor or your age is a multiple of three" is displayed.
Use conditions (if-else). 
*/
#include <stdio.h>

int main()
{
    int age;

    printf("Hi! Please, type your age: ");
    scanf("%d", &age);
    printf("Ok, your age is: %d\n", age);

    if (((age % 3) && (age > 17)))
        printf("Your age isn't a multiple of three and you are of age\n");
    else
        printf("You are a minor or your age is a multiple of three\n");
    return (0);
    
}