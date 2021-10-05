#include "main.h"
/**
 * -islower - si minuscule return 1 sinon 0
 * 
 * @c: variable
 * Return: 1
 */
int _isalpha(int c)
{
    if((96 < c && c < 123) || (64 < c && c < 91))
    {
        return(1);
    }
    else
    {
        return(0);
    }
}
