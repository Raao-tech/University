#include <stdio.h>

/* , , , , , , ,  and .  */
int main(void)
{
    short           s = -5;
    unsigned short  us = 7;
    long            l = -45000;
    unsigned long   ul = 678912356;
    int             i = 123531;
    unsigned int    ui = 32455343;
    float           f = 2312.34223;
    double          d = 12.324234;
    char            c = 'J';
    char            an = 'y';

    printf("Enter the \33[35mfirst\33[00m letter of your name:\n");
    scanf("%c", &c);
    printf("Does Your name start whit \33[35m%c\33[00m?(\33[31my\33[00m/\33[32mn\33[00m)\n", c);

    scanf(" %c", &an);
    printf("is Your answer \33[31m%c\33[00m?\n", an);
    scanf(" %c", &an);
    if ((an != 'y'))
    {
        printf("OK, Goodbye man! see you later for here.\n");
        return (1);
    }
    printf("Enter short and unsigned short, please:\n");
    scanf("%hd %hu", &s, &us);
    printf("short: %hd and unsigned short: %hu\n", s, us);   

    printf("Enter long and unsigned long, please:\n");
    scanf("%ld %lu", &l, &ul);
    printf("long: %ld and unsigned long: %lu\n", l, ul);  

    printf("Enter int and unsigned int, please:\n");
    scanf("%d %u", &i, &ui);
    printf("int: %d and unsigned int: %u\n", i, ui);  

    printf("Enter float and double, please:\n");
    scanf("%f %lf", &f, &d);
    printf("float: %-.3f and double: %-3.3lf and scientific notation: %le\n", f, d,d);  


    printf("Good! You get it, see you later ;) .\n");

    //printf("Your notes from the latest exams are %f %f %f %f %f?\n", P1, P2, P3, P4, P5);
    return (0);
}
/* 
#include <stdio.h>
 
int main()
{
    short s;
    unsigned short us;
    long l;
    unsigned long ul;
    int i;
    unsigned int ui;
    float f;
    double d;
    char c;

    printf("Type a short: ");
    scanf("%hd", &s);

    printf("Type an unsigned short: ");
    scanf("%hu", &us);
 
    printf("Type a long: ");
    scanf("%ld", &l);

    printf("Type an unsigned long: ");
    scanf("%lu", &ul);

    printf("Type an int: ");
    scanf("%d", &i);

    printf("Type an unsigned int: ");
    scanf("%u", &ui);

    printf("Type a float: ");
    scanf("%f", &f);

    printf("Type a double: ");
    scanf("%lf", &d);

    printf("Type a char: ");
    scanf("\n%c", &c); 

    printf("short: %hd and unsigned short: %hu\n", s, us);
    printf("long: %ld and unsigned long: %lu\n", l, ul);
    printf("int: %d and unsigned int: %u\n", i, ui);
    printf("float: %f, scientific notation: %e and shorter: %g\n", f, f, f);
    printf("double: %lf, scientific notation: %le and shorter: %lg\n", d, d, d);
    printf("char: %c", c);
 
    return 0;

} 
*/