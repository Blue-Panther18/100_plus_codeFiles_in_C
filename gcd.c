#include <stdio.h>
/**
 * main - print the greatest common divisor of two nums.
 *
 * Return: 0
 *
 */
int main(void)
{
	int a, b, num1, num2, temp;

	printf("Enter the two numbers: ");
	scanf("%d %d", &a, &b);
	num1 = a, num2 = b;

	while (num2 != 0)
	{
		temp = num2;
		num2 = num1 % num2;
		num1 = temp;
	}

	printf("The GCD of %d and %d is: %d\n", a, b, temp);

	return (0);
}
