#include <stdio.h>
/**
 * main - calls the numReverser function.
 *
 * Return: 0
 *
 * @int: num param.
 *
 */
int reverser(int);

int main(void)
{
	int num, rev;

	printf("Enter a positive integer: ");
	scanf("%d", &num);

	rev = reverser(num);
	printf("The reverse of %d is %d.\n", num, rev);
	return (0);
}

/**
 * reverser - return the reverse of a num.
 *
 * @num: num param.
 *
 * Return: reversed num.
 *
 */
int reverser(int num)
{
	int c, rev = 0, rem;

	c = num;
	while (c != 0)
	{
		rem = c % 10;
		rev = rev * 10 + rem;
		c /= 10;
	}
	return (rev);
}
