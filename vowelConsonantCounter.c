#include <stdio.h>

/**
 * vow_cons_count - finds the number of vowels and consonant in a string.
 *
 * @str: string param.
 * @vowCount: vowels counter.
 * @consCount: consonant counter.
 *
 */
void vow_cons_count(char *str, int *vowCount, int *consCount)
{
	char *s = str;

	while (*s != '\0')
	{
		if (*s == 'a' || *s == 'A' || *s == 'E' || *s == 'e' || *s == 'O' || *s == 'o' || *s == 'U' || *s == 'u')
		{
			(*vowCount)++;
		}
		else if ((*s > 'A' && *s <= 'Z') || (*s > 'a' && *s <= 'z'))
		{
			(*consCount)++;
		}
		s++;
	}
}

/**
 * main - prints the number vowels and consonant in a string.
 *
 * Return: 0
 *
 */
int main(void)
{
	char str1[] = "ADAMAWA";
	char str2[] = "I am Blue_Panther and also AlphaTechie";

	int vowCount1 = 0, consCount1 = 0;
	int vowCount2 = 0, consCount2 = 0;

	vow_cons_count(str1, &vowCount1, &consCount1);
	printf("vowel = %d and consonant = %d for a the sentence = %s.\n", vowCount1, consCount1, str1);

	vow_cons_count(str2, &vowCount2, &consCount2);
	printf("vowel = %d and consonant = %d for a the sentence = %s.\n", vowCount2, consCount2, str2);

	return (0);
}

