#include <stdio.h>
/**
 * main - afficher "and that piece of art is useful" - Dora Korpar, 2015-10-19"
 * Return: 0
 */
int main(void)
{
	char ch[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	int i = 0;

for (i = 0; i < 59; i++)
{
	putchar(ch[i]);
}
	return (1);

}
