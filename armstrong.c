#include <stdio.h>
/**
 * main - checks if a number is an armstrong number or not.
 *
 * Return: 0
 *
 */
int main(void)
{
	int num, b, count = 0, q = 1, result = 0, rem;

	printf("Enter the number: ");
	scanf("%d", &num);
	b = num;

	while (b != 0)
	{
		b /= 10;
		count++;
	}

	b = num;

	while (b != 0)
	{
		rem = b % 10;
		b /= 10;
		for (int i = 0; i < count; i++)
			q *= rem;
		result += q;
		q = 1;
	}
	if (num == result)
		printf("%d is an armstrong number.\n", num);
	else
		printf("%d is not an armstrong number.\n", num);
	return (0);
}

