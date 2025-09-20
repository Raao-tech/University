/* 
 Write a program that asks for an amount in euros and convert it to dollars, 
 pounds sterling and yen.
Look for euro convertion on the web and use macros to save them.
*/
#include  <stdio.h>
#define	E_To_D 1.17
#define	E_To_P 0.87
#define	E_To_YJ 173.76

int main()
{
	short	option;
	double	mount;

	printf("<<<---¡¡¡WELCOME USER TO YOUR CURRENCY CONVERT!!!--->>>\n");
	printf("Select the currency you have target:\n");
	printf("--->   1 .Dollar\n--->   2 .Japanese Yen\n--->   3 .Pounds Sterlings\n");
	printf("Type your option(1, 2 ,3): ");
	scanf("%hd", &option);

	printf("Ok, type your mount in Euros to convert here down, please\n");
	printf("Mount (Euro): ");
	scanf("%lf", &mount);
	
	switch (option)
	{
	case 1:
		printf("----->> %.2lf (USD)\n", (double)(mount * ( E_To_D )) );
		break;
	case 2:
		printf("----->> %.2lf (JY)\n", (double)(mount * ( E_To_YJ )) );
		break;
	case 3:
		printf("----->> %.2lf (PS)\n", (double)mount * ( E_To_P ) );
		break;
	default:
		printf("Please, select a valid option (1, 2 , 3)\n");
		break;
	}

	return (0);
}