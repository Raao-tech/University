/* 
 Write a program that reads two integer vectors of dimension 3.
Then add both vectors and store the sum in a third vector.

The program has to print the components of the third vector and its euclidean norm.

In order to do it, declare three arrays, one for each vector. Use a macro to define their size.

NOTE: To calculate the square root you have to use the function sqrt () and include the header math.h

The following is an example of program execution:

Enter the first component of the first vector: 2

Enter the second component of the first vector: 3

Enter the third component of the first vector: 4

Enter the first component of the second vector: 6

Enter the second component of the second vector: 7

Enter the third component of the second vector: 8

The sum vector is: 8 10 12

The norm is: 17.549928
*/
#include <stdio.h>
#include <math.h>
#define dimension 3

int main()
{
    double  vector_1[dimension], vector_2[dimension], vector_R[dimension], Euc_norm;
    
    printf("Vector's Calculator\n");
    printf("First Vector's Components:\n");

    printf("X_1 = ");
    scanf("%lf", &vector_1[0]);
    printf("Y_1 = ");
    scanf("%lf",&vector_1[1]);
    printf("Z_1 = ");
    scanf("%lf", &vector_1[2]);

    printf("Second Vector's Components:\n");

    printf("X_2 = ");
    scanf("%lf", &vector_2[0]);
    printf("Y_2 = ");
    scanf("%lf", &vector_2[1]);
    printf("Z_2 = ");
    scanf("%lf", &vector_2[2]);

    printf("----------------------\n");
    printf("Perfect, your Vectors are: \n");
    printf("Vector_1 (%.2lf, %.2lf, %.2lf)\nVector_2 (%.2lf, %.2lf, %.2lf)\n", 
        vector_1[0], vector_1[1], vector_1[2], vector_2[0], vector_2[1], vector_2[2]);

    vector_R[0] = vector_1[0] + vector_2[0];
    vector_R[1] = vector_1[1] + vector_2[1];
    vector_R[2] = vector_1[2] + vector_2[2];
    Euc_norm = sqrt( ((vector_R[0])*(vector_R[0])) +  ((vector_R[1])*(vector_R[1])) + ((vector_R[2])*(vector_R[2])));

    printf("--------Vector Resultante (%.2lf, %.2lf, %.2lf)--->\n", vector_R[0], vector_R[1], vector_R[2]);

    printf("|\n--- Norm = %.6lf ---->\n", Euc_norm);
    return(0);
}