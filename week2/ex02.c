/* 
 Modify the previous exercise to first check if you are a minor and, in that case, show the message "You are underage".

 If you are of legal age, you will check if your age is a multiple of three and it will show the messages "You are of age 
and your age is a multiple of three" or "You are of age and your age is not a multiple of three". 
*/
#include <stdio.h>

int main()
{
    int age;

    printf("Hi! Please, type your age: ");
    scanf("%d", &age);

    if (((age > 17)))
    {
        if ((age % 3))
            printf("You are of age   AND  Your age isn't a multiple of three\n");
        else
            printf("You are of age   AND  Your age is a multiple of three\n");
    }
    else
        printf("You are underage\n");
    return (0);
}