#include "main.h"
/**
 * -islower - si minuscule return 1 sinon 0
 * 
 * @c: variable
 * Return: 1
 */
int _islower(int c)
{
    if(96 < c && c < 123)
    {
        return(1);
    }
    else
    {
        return(0);
    }
}
