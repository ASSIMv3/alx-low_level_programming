#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
* print_all -  prints anything
* @format: list of types of arguments passed to the function
* return : void
*/
void print_all(const char * const format, ...)
{
	va_list args;

	char c;
	int i;
	float f;
	char *s;
	int count = 0;

	va_start(args, format);
	while (format && format[count])
	{
		switch (format[count])
		{
			case 'c':
				c = (char)va_arg(args, int);
				printf("%c", c);
				break;
			case 'i':
				i = va_arg(args, int);
				printf("%d", i);
				break;
			case 'f':
				f = (float)va_arg(args, double);
				printf("%f", f);
				break;
			case 's':
				s = va_arg(args, char*);
				if (s == NULL)
					printf("(nil)");
				else
					printf("%s", s);
				break;

		default:
				break;
		}
		count++;
	}
	printf("\n");
	va_end(args);
}
