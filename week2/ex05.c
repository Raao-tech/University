/*
 Write an Euro converter to several currencies using the switch statement.
The program must present on screen a menu like the following:

Select an option:

{D}ollar

{Y}en

{P}ound

Next, the program must request a quantity in euros, which will be converted to the selected currency.

The user can enter D, Y or P in uppercase or lowercase.

The program must inform if the option entered is incorrect. 
*/
#include <stdio.h>

int	main()
{
	char	option;
	double	conversion, current;

	printf("----WELCOME to your CONVERT CURRENT--------\n..\n..\n..\n");
	printf("Select an option:\n");
	printf("{D}ollar\n{Y}en\n{P}ound\n");
	printf("Type here: ");
	scanf("%c", &option);

	switch (option)
	{
		case 'D':
		case 'd':
			conversion = 1.19;	
			break;
		case 'P':
		case 'p':
			conversion = 8.43;
			break;
			case 'Y':
		case 'y':
			conversion = 8.43;
			break;
		default:
			printf("Please, enter a correct option.\n");
			return	(1);
			break;
	}

	printf("Now, Enter your current to convert (Euro): ");
	scanf("\n%lf", &current);
	printf("\n-----:>> %.2lf Eur to %c = %.2lf \n", current, option, (current * conversion));

	return(0);
}