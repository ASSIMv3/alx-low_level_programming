#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
#include <stdio.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print__char(char *separator, va_list args);
void print__int(char *separator, va_list args);
void print__float(char *separator, va_list args);
void print__str(char *separator, va_list args);
/**
 * struct print_fn - Struct print_fn
 * @type: The format specifier
 * @print: The function pointer to print the corresponding argument
 */
typedef struct print_fn
{
	char *type;
	void (*print)(char *separator, va_list args);
} print_fn_t;

#endif
