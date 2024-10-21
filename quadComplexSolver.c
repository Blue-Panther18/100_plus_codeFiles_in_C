#include <stdio.h>
#include <math.h>
#include <complex.h>
/**
 * main - calls the equation solver function.
 *
 * Return: 0
 *
 * @a: x squared coordinate param.
 * @b: x coordinate param.
 * @c: constant param
 * @result: result array param.
 *
 */
void quadSolver(double a, double b, double c, double complex *result);

int main(void)
{
	double a, b, c;
	double complex res[2];

	printf("Enter the values of a, b, c: ");
	scanf("%lf %lf %lf", &a, &b, &c);
	quadSolver(a, b, c, res);

	if (creal(res[0]) == res[0])
		printf("The solutions to the quadratic equation are: %.2lf and %.2lf\n", creal(res[0]), creal(res[1]));
	else
		printf("The solutions to the quadratic equation are: %.2lf + %.2lfi and %.2lf + %.2lfi\n", creal(res[0]), cimag(res[0]), creal(res[1]), cimag(res[1]));
	return (0);
}

/**
 * quadSolver - solve quadratic equation.
 *
 * @a: x squared coordinate param.
 * @b: x coordinate param.
 * @c: constant param.
 * @result: result array param.
 *
 */
void quadSolver(double a, double b, double c, double complex *result)
{
	double discr = (b * b) - (4 * a * c);

	if (discr > 0)
	{
		result[0] = (-b - sqrt(discr)) / (2 * a);
		result[1] = (-b + sqrt(discr)) / (2 * a);
	}
	else if (discr == 0)
	{
		result[0] = result[1] = -b / (2 * a);
	}
	else
	{
		double realPart = -b / (2 * a);
		double imagPart = sqrt(-discr) / (2 * a);

		result[0] = realPart + I * imagPart;
		result[1] = realPart - I * imagPart;
	}
}


