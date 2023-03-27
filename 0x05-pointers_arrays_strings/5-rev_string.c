#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string to be reversed
 * Return: void
 */
void rev_string(char *s)
{
	int i, j;
	char rev[1000];

	i = 0;
	while (s[i] != '\0')
		i++;

	j = 0;
	i -= 1;
	while (i >= 0)
	{
		rev[j] = s[i];
		j++;
		i--;
	}

	i++;
	j--;
	while (j >= 0)
	{
		s[i] = rev[i];
		i++;
		j--;
	}
}
