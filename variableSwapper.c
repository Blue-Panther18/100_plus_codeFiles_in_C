#include <stdio.h>
/**
 * main - calls the variableSwapper methods.
 *
 * Return: 0
 *
 * @int*: first param
 * @int*: second param
 *
 */
void swap_values_1(int*, int*);
void swap_values_2(int*, int*);
void swap_values_3(int*, int*);

int main(void)
{
	int a, b;

	printf("Enter the values of the two numbers: ");
	scanf("%d %d", &a, &b);
	printf("The initial values of a and b are %d and %d.\n", a, b);
	swap_values_1(&a, &b);
	printf("The values of a and b using + and - methods are %d and %d\n", a, b);
	swap_values_2(&a, &b);
	printf("\nThe values of a and b using XOR methods are %d and %d\n", a, b);
	swap_values_2(&a, &b);
	printf("\nThe values of a and b using Bitwise are %d and %d\n", a, b);

	return (0);
}

/**
 * swap_values_1 - swap the values of two variables.
i *
 * @a: first variable
 * @b: second variable
 *
 */
void swap_values_1(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}

/**
 * swap_values_2 - swap the value of two variables.
 *
 * @a: first variable
 * @b: second variable
 *
 */
void swap_values_2(int *a, int *b)
{
	*a = *a ^ *b;
	*b = *b ^ *a;
	*a = *a ^ *b;
}

/**
 * swap_values_3 - swap the values of two variables
 *
 * @a: first variable
 * @b: second variable
 *
 */
void swap_values_3(int *a, int *b)
{
	*a = *a | *b;
	*b = *a & *b;
	*a = *a | ~*b;
}
