#include "main.h"

/**
 * _strcpy - copies the string pointes to by src
 * @dest: destination
 * @src: str to be copied
 * Return: pointer to the dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];

	return (dest);
}
