#include "main.h"

/**
 * swap_int - swaps two int values.
 * @a: first variable to swap.
 * @b: second variable to swap.
 * Return: void.
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
