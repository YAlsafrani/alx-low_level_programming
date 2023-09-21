#include "main.h"

/**
 * string_toupper - Changes all lowercase letters to uppercase.
 * @str: The string to modify.
 *
 * Return: Pointer to the modified string.
 */
char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr)
	{
		if (*ptr >= 'a' && *ptr <= 'z')
			*ptr -= ('a' - 'A');
		ptr++;
	}

	return (str);
}
