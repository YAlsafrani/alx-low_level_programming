#include "main.h"

/**
 * _islower - Returns if char is lower case
 *
 * Return: 1 for lower case, 0 otherwise
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
