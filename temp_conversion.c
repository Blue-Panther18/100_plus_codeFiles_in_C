#include <stdio.h>
/**
 * main - convert temperature between celcius to fehrenheit.
 *
 * Return: 0
 *
 */
int main(void)
{
	double temp, convert;
	char scale;

	printf("Enter the first letter of the scale used from C or F: ");
	scanf("%c", &scale);

	printf("Enter the value of the temperature: ");
	scanf("%lf", &temp);

	if (scale == 'C' || scale == 'c')
	{
		convert = (temp * 9 / 5.0) + 32;
		printf("The Fehrenheit equivalent of %.2lfC is %.2lfF.\n",
				temp, convert);
	}
	else if (scale == 'F' || scale == 'f')
	{
		convert = (temp - 32) * 5 / 9.0;
		printf("The Celcius equivalent of %.2lfF is %.2lfC.\n",
				temp, convert);
	}
	else
		printf("Not a recognized scale\n");
	return (0);
}

