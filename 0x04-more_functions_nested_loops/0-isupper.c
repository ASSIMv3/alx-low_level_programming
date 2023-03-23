#include "main.h"
#include <sdtio>

/**
 * isupper - checks for uppercase char
 * @c: char
 * Return: 1 if c is uppercase, 0 otherwise
 */
int isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
