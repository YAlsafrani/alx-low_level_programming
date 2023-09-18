#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a string.
 * @s: the string to be reversed.
 * Return: void.
*/

void rev_string(char *s)
{
	char temp;
	int length = 0;
	int i, j;

	while (s[length] != '\0')
	{
		length++;
	}

	j = length - 1;

	for (i = 0; i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
