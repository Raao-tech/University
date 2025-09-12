#include <stdio.h>

int main(void)
{
    float P1, P2, P3, P4, P5, Fn;

    P1 = 0;
    P2 = 0;
    P3 = 0;
    P4 = 0;
    P5 = 0;
    Fn = 0;

    printf("Hello! I need your notes from the latest exams, from the first one to the most recent one, please.\n");
    printf("exam 0:\n");
    scanf("%f", &P1);
    printf("exam 1:\n");
    scanf("%f", &P2);
    printf("exam 2:\n");
    scanf("%f", &P3);
    printf("exam 3:\n");
    scanf("%f", &P4);
    printf("exam 4:\n");
    scanf("%f", &P5);
    Fn = (P1 + (2*P2) + (2*P3) + (2*P4) + (3*P5))/10;
    printf("your finall note is: %.2f\n", Fn);

    //printf("Your notes from the latest exams are %f %f %f %f %f?\n", P1, P2, P3, P4, P5);
    return (0);
}
/*
#include <stdio.h>

int main() 
{

    double p1, p2, p3, p4, p5, score;
    
    information request
    printf("Type the grade of test 1: ");
    scanf("%lf", &p1);

    printf("Type the grade of test 2: ");
    scanf("%lf", &p2);
    
    printf("Type the grade of test 3: ");
    scanf("%lf", &p3);
    
    printf("Type the grade of test 4: ");
    scanf("%lf", &p4);
    
    printf("Type the grade of test 5: ");
    scanf("%lf", &p5);
    
    calculations
    score = (p1+2*p2+2*p3+2*p4+3*p5)/10;

    output the result
    printf("The final score of the continuous evaluation is: %lf\n", score);
    
    return 0;
} 
 */