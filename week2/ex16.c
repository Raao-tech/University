/* 
 BOTE: This exercise is an adaptation of one of the weekly continuous assessment tests from a previous year.
Defines an array of integers of size 3x3.

The program has to read a date and store it in the first row of the matrix (the day in the first column, the month in the second and the year in the third). Then it has to calculate the difference between the days, months and years of the first and second rows of the matrix and store them in the third row of the matrix (the difference of days in the first column, the difference of months in the second and the difference of years in the third).

Finally it will show the differences stored in the third row of the matrix on the screen.

The program has to use a macro to define matrix size.

The messages must be shown as they appear in the following example of execution and in the same order (varying only according to the data entered by the user).

The following is an example of program execution:

Enter a day: 28

Enter a month: 2

Enter a year 1997

Enter another day: 25

Enter another month: 6

Enter another year 2000

The difference in days is: 3

The difference in months is: -4

The difference in years is: -3
*/
#include <stdio.h>
#define Dim 3

int main()
{
    int matrix[Dim][Dim];
    
    printf("Enter a day: ");
    scanf("%d", &matrix[0][0]);
    printf("Enter a month: ");
    scanf("%d", &matrix[0][1]);
    printf("Enter a year ");
    scanf("%d", &matrix[0][2]);

    printf("Enter another day: ");
    scanf("%d", &matrix[1][0]);
    printf("Enter another month: ");
    scanf("%d", &matrix[1][1]);
    printf("Enter another year ");
    scanf("%d", &matrix[1][2]);

    matrix[1][0] = matrix[0][0] - matrix[1][0];
    matrix[1][1] = matrix[0][1] - matrix[1][1]; 
    matrix[1][2] = matrix[0][2] - matrix[1][2];

    printf("The difference in days is: %d\n", matrix[1][0]);
    printf("The difference in months is: %d\n", matrix[1][1]);
    printf("The difference in years is: %d\n", matrix[1][2]);
    return (0);
}