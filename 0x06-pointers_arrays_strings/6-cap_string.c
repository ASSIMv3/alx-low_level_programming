#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: a given string
 * Return: Capitalized string
 */
char *cap_string(char *str)
{
	int i, j;
	int sep[] = {32, 9, 11, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	i = 0;
	while (*(str + i) != '\0')
	{
		if (i == 0 && (*(str + i) >= 97 && *(str + i) <= 122))
			*(str + i) = *(str + i) - 32;
		for (j = 0; j < 14; j++)
		{
			if (*(str + (i - 1)) - sep[j] == 0)
			{
				if (*(str + i) >= 97 && *(str + i) <= 122)
					*(str + i) = *(str + i) - 32;
			}
		}
		i++;
	}

	return (str);
}
