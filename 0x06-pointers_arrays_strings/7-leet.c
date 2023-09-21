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
	char leet_replacements[] = "4433007711";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == leet_table[j])
			{
				str[i] = leet_replacements[j];
			}
		}
	}

	return (str);
}
