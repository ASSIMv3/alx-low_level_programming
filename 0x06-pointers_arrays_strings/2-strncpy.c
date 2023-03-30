#include "main.h"

/**
 * _strncpy - a function that copies a string
 * @dest: destination string
 * @src: source string
 * @n: number of characters to copy
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	if (!src[i])
		dest[i] = src[i];
	return (dest);
}
