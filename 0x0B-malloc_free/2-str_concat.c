#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to a space in memory
 */
char *str_concat(char *s1, char *s2)
{
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	int len1 = 0;

	while (s1[len1] != '\0')
		len1++;

	int len2 = 0;

	while (s2[len2] != '\0')
		len2++;

	char *str = malloc(sizeof(char) * (len1 + len2 + 1));

	if (str == NULL)
		return (NULL);

	int i = 0;

	while (i < len1)
	{
		str[i] = s1[i];
		i++;
	}

	int j = 0;

	while (j < len2)
	{
		str[i] = s2[j];
		i++;
		j++;
	}

	str[i] = '\0';

	return (str);
}

