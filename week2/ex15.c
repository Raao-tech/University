/* 
 Write a program that calculates the determinant of a 3x3 matrix of integers.
The values of the matrix DO NOT have to be read by keyboard. Instead, initialize it with the following values when declaring:

1 2 1

1 1 2

3 0 3
*/
#include <stdio.h>
#define	DIM 3

int	main()
{
	double	matrix[DIM][DIM], determinate;

	matrix[0][0] = 1;
	matrix[0][1] = 2;
	matrix[0][2] = 1;

	matrix[1][0] = 1;
	matrix[1][1] = 1;
	matrix[1][2] = 2;

	matrix[2][0] = 3;
	matrix[2][1] = 0;
	matrix[2][2] = 3;

	determinate = (matrix[0][0] * matrix[1][1] * matrix[2][2]) + (matrix[0][1] * matrix[1][2] * matrix[2][0]) + (matrix[0][2] * matrix[1][0] * matrix[2][1]);
	determinate = determinate - (matrix[0][2] * matrix[1][1] * matrix[2][0]) - (matrix[0][1] * matrix[1][0] * matrix[2][2]) - (matrix[0][0] * matrix[1][2] * matrix[2][1]);

	printf("The matrix's determinant is =  %.2lf\n", determinate);

	return (0);
}