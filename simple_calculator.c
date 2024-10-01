#include <stdio.h>

/**
 * main - its perform simple arithmetic operation
 *
 * Return: 0
 */

int main(void)
{
	int num1, num2;

	printf("Enter first integer: ");
	scanf("%d", &num1);
	printf("Enter second integer: ");
	scanf("%d", &num2);

	printf("\nAddition of %d and %d is %d.\n", num1, num2, (num1 + num2));
	printf("Subtration of %d from %d is %d.\n", num2, num1, (num1 - num2));
	printf("Multiplication of %d and %d is %d.\n", num1, num2, (num1 * num2));
	printf("Division of %d by %d is %d.\n", num1, num2, (num1 / num2));

	return (0);
}

