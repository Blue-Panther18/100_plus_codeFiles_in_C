#include <stdio.h>

/**
 * main - checks if a number is odd or even.
 *
 * Return: 0
 *
 */

int main(void)
{
	int num;

	printf("Enter a positive number: ");
	scanf("%d", &num);

	if (num % 2 != 0)
		printf("%d is an odd number.\n", num);
	else
		printf("%d is an even number.\n", num);

	return (0);
}
