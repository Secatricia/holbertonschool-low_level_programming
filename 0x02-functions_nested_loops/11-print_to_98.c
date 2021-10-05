#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_to_98(int n)
{
    while (n != 98)
    {
    if (n < 98)
    {
        printf("%d, ", n);
        n++;
    }
    else if (n > 98)
    {
        printf("%d, ", n);
        n--;
    }
    }
    
    printf("%d, 98 \n", n);
}
