#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @str: The input string.
 *
 * Return: Pointer to the modified string.
 */
char *leet(char *str)
{
	char leet_table[] = "aAeEoOtTlL";
	char leet_replacements[] = "43077171";

	char *ptr = str;
	int i;

	while (*ptr)
	{
		i = 0;
		while (leet_table[i])
		{
			if (*ptr == leet_table[i])
				*ptr = leet_replacements[i];
			i++;
		}
		ptr++;
	}

	return (str);
}
