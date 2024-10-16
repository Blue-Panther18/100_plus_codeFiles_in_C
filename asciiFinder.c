#include <stdio.h>
/**
 * main - print the ascii value of a char.
 *
 * Return: 0
 *
 */

int main(void)
{
	int ch;

	printf("Enter a character: ");
	ch = getchar();
	printf("The ASCII value of the character %c is %d\n", ch, ch);
	return (0);
}
