#include "main.h"

/**
 * _strncpy - Copies at most n bytes of src to dest.
 * @dest: The destination string.
 * @src: The source string to copy from.
 * @n: The maximum number of bytes to copy.
 *
 * Return: Pointer to the resulting string `dest`.
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *start = dest;

	while (*src && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}

	return (start);
}
