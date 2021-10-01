#include <stdio.h>
#include <stdlib.h>
/**
 * main - ecrire l'alphabet en minuscule et majuscule
 *
 * Return: 0
 */
int main(void)
{
	int i;
    int j;

for(i = 0; i < 99; i++)
{
    for(j = i + 1; j < 100; j++)
    {
    putchar((i / 10) + 48);
    putchar((i % 10) + 48);
    putchar(' ');
    putchar((j / 10) + 48);
    putchar((j % 10) + 48);


        if (i==98 && j==99)
            continue;
    putchar(',');
    putchar(' ');

    }
}
	putchar ('\n');
	return (0);
}
