#include <stdio.h>
/**
 * main - checks if a number is prime.
 *
 * Return: 0
 *
 */
int main(void)
{
	int num, j = 0;

	printf("Enter an integer: ");
	scanf("%d", &num);

	if (num == 0 || num == 1 || num < 0)
		printf("%d is not prime\n", num);
	else
	{
		for (int i = 2; i < num / 2; i++)
		{
			if (num % i == 0)
				j++;
		}
		if (j == 0)
			printf("%d is prime.\n", num);
		else
			printf("%d is not prime.\n", num);
	}
		return (0);
}
