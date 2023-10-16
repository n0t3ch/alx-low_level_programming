#include "main.h"

/**
 * checker - check prime
 * @a: number given
 * @b: checking multiple
 * Return: if prime 1
 */
int checker(int a, int b)
{
	if (b < 2 || (b % a) == 0)
		return (0);
	if (a > (b / 2))
		return (1);
	else
		return (checker(a + 1, b));
}

/**
 * is_prime_number - check prime number
 * @n: number to check
 * Return: 1 if prime
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (checker(2, n));
}
