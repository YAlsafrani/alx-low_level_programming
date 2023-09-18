#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a string.
 * @s: the string to be reversed.
 * Return: void.
*/

void rev_string(char *s)
{
	int length;
	int i;
	char *s1;

	s1 = s;

	length = 0;

	while (*s != '\0')
	{
		s++;
		length++;
	}

	s--;

	for (i = 0; i <= length; i++)
	{
		*s1 = *s;
		s1++;
		s--;
	}
}
