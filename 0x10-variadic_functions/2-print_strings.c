#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings -  function that prints strings
 * @separator: separe les arguments
 * @n: nombre d'arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *a;
	va_list args;

	va_start(args, n);

	if (n == 0)
		return;
	for (i = 0; i < n - 1; i++)
	{
		a = va_arg(args, char *);
		if (a == NULL)
			printf("(nil)");
		else
			printf("%s", a);

		if (separator != NULL)
			printf("%s", separator);
	}
	printf("%s\n", va_arg(args, char *));
	va_end(args);
}
