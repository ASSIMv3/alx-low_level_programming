#include "main.h"

/**
 * _strcat - concatenates 2 strings
 * @dest: char
 * @src: char
 * Return: destination
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	for (j = 0; src[j] != '\0'; j++)
		dest[i++] = src[j];

	return (dest);
}
