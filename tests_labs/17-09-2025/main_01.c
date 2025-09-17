/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

/*
3. Escribe un programa que empiece pidiendo un nC:mero entre 1 y 9.  El programa debe escribir la tabla de multiplicar de este nC:mero. Debes conseguir que la salida quede alineada como en el siguiente ejemplo de ejecuciC3n:

Introduce un nC:mero entre 1 y 9: 3
3.000000 x 1 = 3.000000
3.000000 x 2 = 6.000000
3.000000 x 3 = 9.000000
3.000000 x 4 = 12.000000
3.000000 x 5 = 15.000000
3.000000 x 6 = 18.000000
3.000000 x 7 = 21.000000
3.000000 x 8 = 24.000000
3.000000 x 9 = 27.000000
*/

#include  <stdio.h>

int main()
{
	int   numb;
	int     i;

	i = -1;
	printf("Introduce un nC:mero entre 1 y 9: ");
	scanf("%d", &numb);
	while((++i) <= 9 )
	{
		printf("%.6lf * %d = %.6lf\n",(double)numb, (i + 1), ( (double)((i + 1) * (int)numb)));
	}

	return (0);
}