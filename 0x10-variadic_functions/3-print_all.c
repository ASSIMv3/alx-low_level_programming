#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: a list of types of arguments
 */
void print_all(const char * const format, ...)
{
	int count = 0;
	int i;
	char *separator = "", *s;
	va_list args;

	va_start(args, format);

	while (format && format[count])
	{
		switch (format[count])
		{
			case 'c':
				printf("%s%c", separator, va_arg(args, int));
					break;
			case 'i':
				printf("%s%d", separator, va_arg(args, int));
					break;
			case 'f':
				printf("%s%f", separator, va_arg(args, double));
					break;
			case 's':
				s = va_arg(args, char *);
				if (!s)
					s = "(nil)";
				printf("%s%s", separator, s);
				break;
			default:
				i++;
				continue;
		}
		separator = ", ";
		i++;
	}
	printf("\n");
	va_end(args);
}
