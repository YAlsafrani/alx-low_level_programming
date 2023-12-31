#include "main.h"
#include <stdio.h>

/**
 * puts2 - Prints every other character of a string.
 * @str: Pointer to a string
 * Return: void
*/
void puts2(char *str)
{
	int i;
	int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	for (i = 0; i < length; i += 2)
	{
		putchar(str[i]);
	}

	putchar('\n');
}
