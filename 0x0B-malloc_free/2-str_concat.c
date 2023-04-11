#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - Concatenates two strings
 *
 * @s1: First string
 * @s2: Second string
 *
 * Return: Pointer to a newly allocated space in memory with the concatenated
 *         strings or NULL if memory allocation fails
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	unsigned int i, len1 = 0, len2 = 0;

	if (s1 != NULL)
		len1 = _strlen(s1);

	if (s2 != NULL)
		len2 = _strlen(s2);

	s = malloc((sizeof(char) * (len1 + len2)) + 1);
	if (s == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
	{
		s[i] = s1[i];
	}

	for (i = len1; i < len1 + len2; i++)
	{
		s[i] = s2[i - len1];
	}

	s[len1 + len2] = '\0';

	return (s);
}
/**
 * _strlen - Computes the length of a string
 * @s: String
 * Return: Length of s
 */
unsigned int _strlen(char *s)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++);

	return (i);
}
