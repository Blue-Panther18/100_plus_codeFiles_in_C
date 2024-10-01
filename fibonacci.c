#include <stdio.h>
/**
 * main - prints the fibonacci sequence within a N range.
 *
 * Return: 0
 *
 */

int main(void)
{
	int n;
	int a = 1, b = 1, c;

	printf("Enter the value of N: ");
	scanf("%d", &n);

	printf("%d, %d", a, b);

	while (n != 0)
	{
		c = a + b;
		printf(", %d", c);
		a = b;
		b = c;
		n--;
	}
	printf("\n");
	return (0);
}

