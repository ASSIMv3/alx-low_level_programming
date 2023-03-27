#include "main.h"

/**
 * puts2 - prints every other character of a string, starting with the first
 * @str: string to print characters from
 * Return: 0
 */
void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		if (str[i + 1] == '\0')
			break;
		i += 2;
	}
	_putchar('\n');
}
