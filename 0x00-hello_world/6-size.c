#include <stdio.h>
/**
 * main - prints the size of various types on the computer it is compiled
 *
 * Return: 0
 */
int main(void)
{
printf("Size of a char: %lu bite(s)\n", sizeof(char));
printf("Size of an int: %lu bite(s)\n", sizeof(int));
printf("Size of a long int: %lu bite(s)\n", sizeof(unsigned long int));
printf("Size of a long long int: %lu bite(s)\n", sizeof(long int));
printf("Size of a long int: %ld bite(s)\n", sizeof(float));

	return (0);

}
