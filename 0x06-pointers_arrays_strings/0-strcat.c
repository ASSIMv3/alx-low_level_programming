#include "main.h"

/**
 * _strcat - concatenates 2 strings
 * @dest: char
 * @src: char
 * Return: destination
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i])
	{
		i++;
	}
	j = 0;
	while (src[j])
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = src[j];
	return (dest);
}
