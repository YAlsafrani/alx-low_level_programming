#include "main.h"

/**
 * print_alphabet - prints the alphabet
 *
 * Return: void
*/

void print_alphabet(void)
{
	char ch;
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}

	putchar('\n');

	return (0);
}
