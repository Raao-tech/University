/* 
 Modify the previous exercise to use the following enumeration:
      typedef enum {...} Currency;

Filling the part between curly brackets.

Use the values you fill in for each "case" (instead of using 1, 2 and 3).

*/
#include <stdio.h>
#define D "Dollar"
#define	Y "Japanese Yen"
#define	P "Pound Sterling"

typedef enum {d=1, y, p} Currency;

int main()
{
	int             option;
	double          conversion, current;
	char            divs[3][256] = {D, Y, P}; 
	Currency        moneyName = d;


	printf("----WELCOME to your CONVERT CURRENT--------\n..\n..\n..\n");
	printf("Select an option (1, 2, 3):\n");
	printf("1. Dollar\n\n2. Japanese Yen\n\n3. Pound Sterling\n");
	printf("Type here: ");
	scanf("%d", &option);

	switch (option)
	{
		case d:
			conversion = 1.19;
			break;
		case y:
			conversion = 124.56;
			moneyName = y;
			break;
		case p:
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
	printf("\n-----:>> %.2lf Euros to %s = %.2lf \n", current, divs[moneyName-1], (current * conversion));

    return (0);
}