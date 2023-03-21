#include <main.h>

/**
 * print_alphabet_x10 - Entry point
 * Return: void
 */
void print_alphabet_x10(void)
{
	int c, l;

	for (l = 0; l < 10; l++)
	{
		for (c = 97; c <= 122; c++)
		{
			_putchar(c);
		}
		putchar('\n');
	}
}
