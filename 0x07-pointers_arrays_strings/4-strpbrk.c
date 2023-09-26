#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - Locates the first occurrence in the string @s
 * of any of the bytes in the string @accept.
 *
 * @s: The string to be searched.
 * @accept: The bytes to search for.
 *
 * Return: Pointer to the byte in @s that matches one of the bytes in
 * @accept, or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}

	return (NULL);
}
