#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers
 * @separator: ce qui separe les arguments
 * @n: nombre d'arguments
 * Return: Always 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	if (n == 0)
		return;
	for (i = 0; i < n - 1; i++)
	{
		printf("%d", va_arg(args, int));
		if (separator != NULL)
			printf("%s", separator);
	}
	printf("%d\n", va_arg(args, int));
	va_end(args);
}
