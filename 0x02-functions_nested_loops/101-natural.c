#include "main.h"

/**
 * print_times_table - table de multiplication en fonction de n
 *
 * @n: variable
 */
int main(void)
{
	int n = 0;
	int v = 0;
	while (n <= 1024)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			v = v + n;
		}
		n++;
	}
	return (0);
}
