#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
#include <stdio.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct printer - Struct print_fn
 * @symb: The format specifier
 * @print: The function pointer to print the corresponding argument
 */
typedef struct printer
{
	char *printer;
	void (*print)(char *separator, va_list args);
} print_t;


#endif
