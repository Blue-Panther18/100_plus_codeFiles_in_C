#include <stdio.h>
#include <stdlib.h>
/**
 * main - This is a number guess game file.
 *
 * Return: 0
 *
 */

int main(void)
{
	/* generate random number between 1-10 */
	int num = (rand() % 10) + 1;
	int trail = 5;
	int guess;


	while (trail != 0)
	{
		printf("Guess a number between 1-10: ");
		scanf("%d", &guess);
		if (guess == num)
		{
			printf("Bravo!!! you've made the right guess.\n");
			break;
		}
		else if (guess > num)
		{
			printf("oops! your guess is larger, try again.\n");
		}
		else if (guess < num)
		{
			printf("oops! your guess is smaller, try again.\n");
		}
		trail--;
	}

	if (trail == 0)
		printf("Game Over!!!");
	return (0);
}


