#include <stdio.h>
/**
 * main - prints the factorial of an positive number.
 *
 * Return: 0
 *
 */
int main(void)
{
	int num, fact = 1;

	printf("Enter a positive number: ");
	scanf("%d", &num);

	if (num == 0 || num == 1)
		printf("The factorial of %d is 1.\n", num);
	else if (num < 0)
		printf("%d is not a positive number.\n", num);
	else
	{
		for (int i = 1; i <= num; i++)
			fact *= i;
		printf("The factorial of %d is %d.\n", num, fact);
	}
	return (0);
}

