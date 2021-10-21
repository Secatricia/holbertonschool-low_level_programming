#include "main.h"
#include <stdio.h>

/**
 * is_palindrome - Write a function that returns 1
 * if a string is a palindrome and 0 if not.
 *@s: variable
 * Return: (palindrome(s, i, j))
 */

int is_palindrome(char *s)
{
	int i;
	int j = 0;

	i = strlenp(s) - 1;
	return (yes_or_no(s, i, j));
}

/**
 * yes_or_no - function that says if a string is a palindrome
 * @s: string
 * @i: from the end of the string
 * @j: from the start of the string
 * Return: (1, 2 or 0)
 */

int yes_or_no(char *s, int i, int j)
{
	if (i > j)
	{
		if (s[i] == s[j])
		{
			return (yes_or_no(s, i - 1, j + 1));
		}
		else
		{
			return (0);
		}
	}
	else
	{
		return (1);
	}
	return (2);
}

/**
 * strlenp - function that says the length of a string
 * @s: string to print
 * Return: ((1 + _strlen_recursion(s + 1)) ou 0)
 */

int strlenp(char *s)
{
	if (*s)
	{
		return (1 + strlenp(s + 1));
	}
	else
	{
		return (0);
	}
}
