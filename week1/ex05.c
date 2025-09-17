#include <stdio.h>

/* , , , , , , ,  and .  */
int main(void)
{
    char            character = 'h';
    short           shorter = 65.5;
    int             integer = 99;
    long            longer = 9999;
    unsigned int    integer_ = 4654;
    unsigned long   long_ = 9999;
    unsigned short  short_ = 234;
    double          doubler = 999999.9994724324;
    float           floatn = 9.999;

    printf("Your prefers variables are here: %c %hi %d %ld %u %lu %hu %lf %lg %le %f %g %e\n", 
        character, shorter, integer, longer, integer_, long_, short_, doubler, doubler, doubler,
        floatn, floatn, floatn);


     short s = -5;
    unsigned short us = 7;
    long l = -45000;
    unsigned long ul = 678912356;
    int i = 123531;
    unsigned int ui = 32455343;
    float f = 2312.34223;
    double d = 12.324234;
    char c = 'J';

    printf("short: %hd and unsigned short: %hu\n", s, us);
    printf("long: %ld and unsigned long: %lu\n", l, ul);
    printf("int: %d and unsigned int: %u\n", i, ui);
    printf("float: %f, scientific notation: %e and shorter: %g\n", f, f, f);
    printf("double: %lf, scientific notation: %le and shorter: %lg\n", d, d, d);
    printf("char: %c", c);
    
    //printf("Your notes from the latest exams are %f %f %f %f %f?\n", P1, P2, P3, P4, P5);
    return (0);
}