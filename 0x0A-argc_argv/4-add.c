#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Entry point.
 * @argc: argument.
 * @argv: argument.
 * Return: always 0.
 */

int main(int argc, char *argv[])
{
	int i;
	unsigned int k, sum;
	char *c;

	sum = 0;

	if  (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			c = argv[i];

			for (k = 0; k < strlen(c); k++)
			{
				printf("Error\n");
				return (1);
			}

			sum += atoi(c);
			c++;
		}

		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}

	return (0);
}
