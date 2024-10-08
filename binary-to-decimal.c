#include <stdio.h>
/**
 * main - calls the binary conversion method.
 *
 * Return: 0
 *
 * @int: binary parameter.
 */
int bin_to_dec(int);

int main(void)
{
	int bin, dec;
	printf("Enter the binary number: ");
	scanf("%d ", &bin);

	dec = bin_to_dec(bin);
	printf("The decimal equivalent of %d is %d.\n", bin, dec);

	return (0);
}

/**
 * bin_to_dec - comvert binary to decimal.
 *
 * @b: binary param
 *
 * Return: decimal equivalent.
 *
 */
int bin_to_dec(int b)
{
	int num, rem, base = 1, dec = 0;

	num = b;

	while (num != 0)
	{
		rem = num % 10;
		dec = dec + rem * base;
		num = num / 10;
		base *= 2;
	}
	return (dec);
}
