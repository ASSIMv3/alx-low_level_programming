#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string
 * Return: int
 */
int _strlen_recursion(char *s)
{
	int i;

	i = 1;
	if (*s == '\0')
		return (0);
	s++;
	len = 1 + _strlen_recursion(s + i);
	return (len);
}
