/* 
 Write a program that reads two dates in the form of day, month and year separated by spaces.
The program must write a message indicating which of the two is earlier, or if both are the same date.

The following is an example of execution:

Please enter the first date: 11 3 1972

Please enter the second date: 24 2 1989

The date 11/3/1972 is before 24/2/1989
*/
#include <stdio.h>

int main()
{
    int day, month, year;
    int day_2, month_2, year_2;

    printf("Enter the first date: ");
    scanf("%d %d %d",&day,&month,&year);
    printf("\nEnter the second date: ");
    scanf("\n%d %d %d",&day_2,&month_2,&year_2);

    int compare = 0;

    if (year_2 < year)
        compare = 1;
    else
    {
        if(month_2 < month)
            compare = 1;
        else
        {
            if (day_2 < day)
                compare = 1;
            else if(day_2 == day)
                compare = 3;
        }
    }                  
    if(!compare)
        printf("The day %d/%d/%d is before that %d/%d/%d \n", day, month, year, day_2, month_2, year_2);
    else if (compare == 1)
        printf("The day %d/%d/%d is before that %d/%d/%d \n", day_2, month_2, year_2, day, month, year);
    else
        printf("The both days are same\n");
    return (0);
}