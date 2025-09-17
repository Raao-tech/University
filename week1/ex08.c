#include <stdio.h>
/*  
    Mi idea era hacer un a fucnion que re¿cibeira el exponente y la base de una potencia,
    y de esa forma dar el resutlado.  Esta la usar+ía para poder calcular la cantidad de 
    combinaciones posibles con el número de bytes por 8 bits de cada tipo de dato dado por 
    sizeof(date) (desearía que salga de inmediato la nueva temproada de Hazbun Hotel!!) 

    Formula pensada para el tipo de dato calculado =  2 elevado a (8bits * sizeof(date)) 
*/ 
long long power_ft(int power, int base)
{
      if(power <= 1 ) // preguntamos si la potencia es menor o giual a cero
        return(base); //si es igual o menor que cero, la multiplicamos
    return(power_ft((power-1), base) * base);
}
int main(void)
{
    printf("A variable of type char is %zu bytes or %lld combinations\n", sizeof(char), power_ft(8 * sizeof(char), 2));
    printf("A variable of type short is %zu bytes or %lld combinations\n", sizeof(short), power_ft(8 * sizeof(short), 2));
    printf("A variable of type unsigned short is %zu bytes or %lld combinations\n", sizeof(unsigned short), power_ft(8 * sizeof(unsigned short), 2));
    printf("A variable of type int is %zu bytes or %lld combinations\n", sizeof(int), power_ft(8 * sizeof(int), 2));
    printf("A variable of type unsigned int is %zu bytes or %lld combinations\n", sizeof(unsigned int), power_ft(8 * sizeof(unsigned int), 2));
    printf("A variable of type long is %zu bytes or %lld combinations\n", sizeof(long), power_ft(8 * sizeof(long), 2));
    printf("A variable of type unsigned long is %zu bytes or %lld combinations\n", sizeof(unsigned long), power_ft(8 * sizeof(unsigned long), 2));
    printf("A variable of type long long is %zu bytes or %lld combinations\n", sizeof(long long), power_ft(8 * sizeof(long long), 2));
    printf("A variable of type unsigned long long is %zu bytes or %lld combinations\n", sizeof(unsigned long long), power_ft(8 * sizeof(unsigned long long), 2));
    printf("A variable of type double is %zu bytes or %lld combinations\n", sizeof(double), power_ft(8 * sizeof(double), 2));
    printf("A variable of type float is %zu bytes or %lld combinations\n", sizeof(float), power_ft(8 * sizeof(float), 2));
    printf("5 elevado a la 3 es : %lld\n",power_ft(3, 5));

    return (0);
}