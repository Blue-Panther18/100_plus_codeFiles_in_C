#include <stdio.h>
/**
 * main - print the greatest common divisor of two nums.
 *
 * Return: 0
 *
 */
int main(void)
{
	int a, b, temp;

	printf("Enter the two numbers: ");
	scanf("%d %d", &a, &b);

	while (b != 0)
	{
		temp = b;
		b = a % b;
		a = temp;
	}

	printf("The GCD is: %d\n", temp);

	return (0);
}
