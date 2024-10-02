#include <stdio.h>
/**
 * main - prints the simple interest.
 *
 * Return: 0
 *
 */
int main(void)
{
	double principal, rate, time, simple_int;

	printf("Enter the principal: ");
	scanf("%lf", &principal);
	printf("Enter the rate: ");
	scanf("%lf", &rate);
	printf("Enter the time: ");
	scanf("%lf", &time);

	simple_int = (principal * rate *  time) / 100;
	printf("The simple interest is %.2lf\n", simple_int);
	return (0);
}
