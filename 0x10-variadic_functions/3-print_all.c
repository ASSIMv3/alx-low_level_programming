#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - prints anything
 * @format: list of args
 */
void print_all(const char * const format, ...)
{
	va_list args;
	print_fn_t types[] = {
		{ "c", print__char },
		{ "i", print__int },
		{ "f", print__float },
		{ "s", print__str }
	};
	unsigned int i, j;
	char *s = "";

	va_start(args, format);
	i = 0;
	while (format && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == *types[j].type)
			{
				types[j].print(s, args);
				s = ", ";
			}
			j++;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}

/**
 * print__char - prints a char
 * @separator: sep of char
 * @args: list of args
 */
void print__char(char *separator, va_list args)
{
	printf("%s%c", separator, va_arg(args, int));
}

/**
 * print__int - prints an int
 * @separator: sep of int
 * @args: list of args
 */
void print__int(char *separator, va_list args)
{
	printf("%s%i", separator, va_arg(args, int));
}

/**
 * print__float - prints a float
 * @separator: sep float
 * @args: list of arguments
 */
void print__float(char *separator, va_list args)
{
	printf("%s%f", separator, va_arg(args, double));
}

/**
 * print__str - prints a string
 * @separator: sep of str
 * @args: list of args
 */
void print__str(char *separator, va_list args)
{
	char *str = va_arg(args, char *);

	if (!str)
	{
		printf("%s%s", separator, "(nil)");
		return;
	}
	printf("%s%s", separator, str);
}
