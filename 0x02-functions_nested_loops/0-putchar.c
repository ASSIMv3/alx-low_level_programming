#include "main.h"

/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
	char phrase[9] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
		_putchar(phrase[i]);
	_putchar('\n');
	return (0);
}
