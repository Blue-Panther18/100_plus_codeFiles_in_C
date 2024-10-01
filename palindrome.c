#include <stdio.h>
/**
 * main - prints if a number is palindrome or not.
 *
 * Return: 0
 *
 */
int main(void)
{
	int num, q, rem, result = 0;

	printf("Enter the number: ");
	scanf("%d", &num);

	q = num;

	while (q != 0)
	{
		rem = q % 10;
		q /= 10;
		result = (result * 10) + rem;
	}
	if (num == result)
		printf("%d is palindrome.\n", num);
	else
		printf("%d is not palindrome.\n", num);
	return (0);
}
