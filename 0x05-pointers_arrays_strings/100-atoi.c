#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted.
 *
 * Return: The converted integer.
 */
int _atoi(char *s)
{ 
	int c = 0, min = 1, isi = 0;
	unsigned int ni = 0;

	while (s[c])
	{
		if (s[c] == '-')
			min *= -1;

		while (s[c] >= '0' && s[c] <= '9')
		{
			isi = 1;
			ni = (ni * 10) + (s[c] - '0');
			c++;
		}

		if (isi == 1)
			break;
		ni *= min;
		return (ni);
}
