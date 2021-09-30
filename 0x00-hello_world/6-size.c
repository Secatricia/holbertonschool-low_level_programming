#include <stdio.h>
/**
 * main - prints the size of various types on the computer it is compiled
 *
 * Return: 0
 */
int main(void)
{

int intType;
float floatType;
char charType;
unsigned long int longInt;
long int longLongInt;

printf("Size of a char: %lu byte(s)\n", sizeof(charType));
printf("Size of an int: %lu byte(s)\n", sizeof(intType));
printf("Size of a long int: %lu byte(s)\n", sizeof(longInt));
printf("Size of a long long int: %lu byte(s)\n", sizeof(longLongInt));
printf("Size of a long int: %ld byte(s)\n", sizeof(floatType));

	return (0);

}
