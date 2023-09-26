#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: Pointer to the string.
 * @accept: Pointer to the accept string.
 *
 * Return: Number of bytes in the initial segment of s which consist only
 *         of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, length;
      	int check;

	length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		check = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				length++;
				check = 1;
			}
		}

		if (check == 0)
			return (length);
	}

	return (length);
}
