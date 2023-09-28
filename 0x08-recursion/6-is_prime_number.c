#include "main.h"

/**
 * is_divisible - Checks if n is divisible by a divisor.
 * @n: The number to be checked for divisibility.
 * @divisor: The divisor to check against n.
 *
 * Return: 1 if divisible, 0 otherwise.
 */
int is_divisible(int n, int divisor)
{
	if (divisor == 1)
		return (0);

	if (n % divisor == 0)
		return (1);

	return (is_divisible(n, divisor - 1));
}

/**
 * is_prime_number - Checks if a number is prime.
 * @n: The number to be checked.
 *
 * Return: 1 if prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (!is_divisible(n, n - 1));
}
