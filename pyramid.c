#include <stdio.h>
/**
 * main - calls the pyramid function.
 *
 * Return: 0
 *
 * @int: N param.
 */
void print_pyramid(int);

int main(void)
{
	int n;

	printf("Enter the number pyramid rows: ");
	scanf("%d", &n);

	print_pyramid(n);

	return (0);
}

/**
 * print_pyramid - prints * n rows times.
 *
 * @n: n param
 *
 */
void print_pyramid(int n)
{
	for (int i = 1; i <= n; i++)
	{
		for (int j = (n - i) / 2; j > 0; j--)
			printf(" ");
		for (int j = 0; j < i; j++)
			printf("*");
		for (int j = (n - i) / 2; j > 0; j--)
			printf(" ");
		printf("\n");
	}
}
