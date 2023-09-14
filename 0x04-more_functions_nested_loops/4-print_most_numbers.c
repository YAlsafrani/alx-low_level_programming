#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 to 9 (excluding 2 and 4)
 * 
 * Return: void
*/

void print_most_numbers(void)
{
	char digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
		if (digit == '2' || digit == '4')
		{
			continue;
		}
		else
		{
			_putchar(digit + '0');
		}
	}

	_putchar('\n');
}