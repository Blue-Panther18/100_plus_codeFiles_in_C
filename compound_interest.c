#include <stdio.h>
#include <math.h>
/**
 * main - calculate the compound interest of principal amount.
 *
 * Return: 0
 *
 */
int main(void)
{
	double p, r, t, a;
	int n;

	printf("Enter the value principal, rate, time and n: ");
	scanf("%lf, %lf, %lf, %d", &p, &r, &t, &n);

	a = p * pow((1 + r / n), (n * t));

	printf("The compound interest of the inputted parameter is %.2lf.\n", a);
	return (0);
}

