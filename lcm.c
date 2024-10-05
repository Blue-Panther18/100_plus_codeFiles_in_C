#include <stdio.h>
/**
 * main - calculate the the lcm btw two nums.
 *
 * Return: 0
 *
 */
int main(void)
{
	int a, b, num1, num2, temp, lcm;

	printf("Enter the two numbers: ");
	scanf("%d %d", &a, &b);
	num1 = a, num2 = b;

	while (num2 != 0)
	{
		temp = num2;
		num2 = num1 % num2;
		num1 = temp;
	}

	lcm = (a * b) / temp;

	printf("The LCM of %d and %d is %d.\n", a, b, lcm);
	return (0);
}

