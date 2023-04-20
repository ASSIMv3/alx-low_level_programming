#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
#include <stdio.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_achar(char *separator, va_list args);
void print_anint(char *separator, va_list args);
void print_afloat(char *separator, va_list args);
void print_astr(char *separator, va_list args);

#endif
