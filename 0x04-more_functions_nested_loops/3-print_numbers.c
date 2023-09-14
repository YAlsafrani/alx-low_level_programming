#include "main.h"

/**
 * print_numbers - prints the numbers from 0 to 9
 *
 * Return: void
*/

void print_numbers(void)
{
	char digit = '0';

	while (digit <= '9')
	{
		_putchar(digit);
		digit++;
	}

	_putchar('\n');
}
