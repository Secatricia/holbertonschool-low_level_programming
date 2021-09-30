#include <stdio.h>
/**
 * main - afficher "and that piece of art is useful" - Dora Korpar, 2015-10-19"
 * Return: 0
 */
int main(void)
{
	char chaine[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	int i = 0;

for (i = 0; i < 59; i++)
{
	putchar(chaine[i]);
}
	return (0);

}
