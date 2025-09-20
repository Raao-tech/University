/* 
Modify the previous exercise so that the menu is of the form:
Select an option:

1. Dollar

2. Japanese Yen

3. Pound Sterling

The user can enter 1, 2 or 3 and the option will be read as an integer.
*/
#include <stdio.h>
#define D "Dollar"
#define	Y "Japanese Yen"
#define	P "Pound Sterling"

typedef enum	{d, y, p} divisa;

int main()
{
	int		option;
	double	conversion, current;
	char	divs[3][256] = {D, Y, P}; 
	divisa	moneyName = d;

	printf("----WELCOME to your CONVERT CURRENT--------\n..\n..\n..\n");
	printf("Select an option (1, 2, 3):\n");
	printf("1. Dollar\n\n2. Japanese Yen\n\n3. Pound Sterling\n");
	printf("Type here: ");
	scanf("%d", &option);

	switch (option)
	{
		case 1:
			conversion = 1.19;
			moneyName = d;
			break;
		case 2:
			conversion = 124.56;
			moneyName = y;
			break;
		case 3:
			conversion = 0.86;
			moneyName = p;
			break;
		default:
			printf("Please, enter a correct option.\n");
			return	(1);
			break;
	}

	printf("Now, Enter your current to convert (Euro): ");
	scanf("\n%lf", &current);
	printf("\n-----:>> %.2lf Euros to %s = %.2lf \n", current, divs[moneyName], (current * conversion));

    return (0);
}