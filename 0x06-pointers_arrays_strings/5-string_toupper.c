#include "main.h"

/**
 * string_toupper - changes all lowercase letters to uppercase
 * @str: a given string
 * Return: the string in uppercase
 */
char *string_toupper(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'a') && (str[i] <= 'z'))
		str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
