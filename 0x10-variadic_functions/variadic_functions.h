#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdio.h>
#include <stdarg.h>

/**
 * struct searchtype - Struct searchtype
 *
 * @typeOf: The type we search
 * @f: The function associated
 */
typedef struct whattype
{
	char *a;
	void (*f)(va_list);
} choice;


int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char *const format, ...);

void print_char(va_list listFormat);
void print_integer(va_list listFormat);
void print_float(va_list listFormat);
void print_string(va_list listFormat);

#endif /*VARIADIC_FUNCTIONS_H*/
