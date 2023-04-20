#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * struct print_fn - Struct print_fn
 * @type: The format specifier
 * @print: print the corresponding argument
 */
typedef struct print_fn
{
	char type;
	void (*print)(va_list);
} print_fn_t;
/**
* print_all -  prints anything
* @format: list of types of arguments passed to the function
* return : void
*/
void print_all(const char * const format, ...)
{
	va_list args;

	int count = 0;
	char *s;

	va_start(args, format);
	while (format && format[count])
	{
		switch (format[count])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case  'f':
				printf("%f", va_arg(args, double));
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
