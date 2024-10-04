#include <stdio.h>
/**
 * main - prints the sum of natural number to n.
 *
 * Return: 0
 *
 */
int main(void)
{
	int n, sum;

	printf("Enter the value of N: ");
	scanf("%d", &n);

	sum = n * (n + 1) / 2;

	printf("The sum of %d is %d.\n", n, sum);
	return (0);
}
