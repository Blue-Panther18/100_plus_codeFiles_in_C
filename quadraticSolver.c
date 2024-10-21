#include <stdio.h>
#include <math.h>
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
void quadSolver(double a, double b, double c, double *result);

int main(void)
{
	double a, b, c;
	double res[2];

	printf("Enter the values of a, b, c: ");
	scanf("%lf %lf %lf", &a, &b, &c);
	quadSolver(a, b, c, res);
	if (a == 0)
		return 1;
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
void quadSolver(double a, double b, double c, double *result)
{
	double discr = (b * b) - (4 * a * c);

	if (discr < 0)
	{
		printf("The equation has complex roots.\n");
	}
	else
	{
		result[0] = (-b - sqrt(discr)) / (2 * a);
		result[1] = (-b + sqrt(discr)) / (2 * a);

		printf("The solutions to the quadratic equation are: %.2lf and %.2lf\n", result[0], result[1]);
	}
}


