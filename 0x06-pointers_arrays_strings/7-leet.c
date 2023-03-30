#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: a given string
 * Return: Encoded string
 */
char *leet(char *str)
{
	int i, j;
	int letters[] = {97, 65, 101, 69, 111, 79, 116, 84, 108, 76};
	int leetcode[] = {52, 52, 51, 51, 48, 48, 55, 55, 49, 49};

	i = 0;
	while (*(str + i) != '\0')
	{
		j = 0;
		while (j < 10)
		{
			if (*(str + i) - letters[j] == 0)
				*(str + i) = leetcode[j];
			j++;
		}
		i++;
	}

	return (str);
}
