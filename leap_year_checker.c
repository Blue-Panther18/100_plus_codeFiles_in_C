#include <stdio.h>
/**
 * main - prints if a year is a leap year or not.
 *
 * Return: 0
 *
 */

int main(void)
{
	int year;

	printf("Enter the year: ");
	scanf("%d", &year);

	if (year % 4 == 0)
		if (year % 100 == 0)
			if (year % 400 == 0)
				printf("%d is a leap year.\n", year);
			else
				printf("%d is not a leap year.\n", year);
		else
			printf("%d is a leap year.\n", year);
	else
		printf("%d is not a leap year.\n", year);

	return (0);
}

