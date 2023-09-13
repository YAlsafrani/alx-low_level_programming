#include <stdio.h>

/**
 * main - Print the sum of even Fibonacci numbers less than 4 million.
 * Return: Always 0.
 */
int main(void)
{
	long int t1 = 1, t2 = 2, nextTerm = t1 + t2;
	long int sum = t2;

	while (nextTerm < 4000000)
	{
		if (nextTerm % 2 == 0)
			sum += nextTerm;
		t1 = t2;
	       	t2 = nextTerm;
		nextTerm = t1 + t2;
	}
	printf("%ld\n", sum);

	return (0);
}
