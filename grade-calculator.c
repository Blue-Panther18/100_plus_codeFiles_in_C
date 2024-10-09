#include <stdio.h>
/**
 * main - calls the grader function.
 *
 * Return: 0
 *
 * @float: grade param
 *
 */
void grader(float);

int main(void)
{
	float score;

	printf("Enter your score: ");
	scanf("%f", &score);

	grader(score);
	return (0);
}

/**
 * grader - prints out the grade of a score.
 *
 * @score: score param.
 *
 */
void grader(float score)
{
	if (score >= 70)
		printf("First Class Honours.\n");
	else if (score < 70 && score >= 60)
		printf("Second Class Honours, Upper.\n");
	else if (score < 60 && score >= 50)
		printf("Second Class Honours, Lower.\n");
	else if (score < 50 && score >= 45)
		printf("Third Class.\n");
	else if (score < 45 && score >= 40)
		printf("Pass.\n");
	else if (score < 40 && score >= 0)
		printf("Fail.\n");
	else
		printf("Invalid score.\n");
}
