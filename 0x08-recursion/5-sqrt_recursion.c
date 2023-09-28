#include "main.h"

/**
 * sqrt_helper - Helper function to calculate square root using recursion.
 * @n: The number for which square root is to be calculated.
 * @guess: The current guess for square root.
 *
 * Return: Square root of n, or -1 if there's no natural square root.
 */
int sqrt_helper(int n, int guess)
{
	if (guess * guess == n)
		return (guess);

	if (guess * guess > n)
		return (-1);

	return (sqrt_helper(n, guess + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number for which square root is to be calculated.
 *
 * Return: Square root of n, or -1 if n does not have a natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (sqrt_helper(n, 0));
}
