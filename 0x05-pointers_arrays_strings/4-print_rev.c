#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string in reverse
 * @s: the string to be reversed
 * Return: void
*/

void print_rev(char *s)
{
	char *s1;

	s1 = s;

	while (*s != '\0')
	{
		s++;
	}

	s--;

	while (s1 <= s)
	{
		putchar(*s);

		s--;
	}

	putchar('\n');
}
