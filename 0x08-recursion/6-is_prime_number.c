#include "main.h"

/**
 * finder - check if prime
 * @num: number given
 * @rt: check if root
 * Return: if prime or not
 */
int finder(int num, int rt)
{
	if (num < 2 || (num % rt) == 0)
		return (0);
	if (rt > (num / 2))
		return (1);
	return (finder(num, rt + 1));
}

/**
 * is_prime_number - is number prime?
 * @n: number given
 * Return: 1 if prime
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (finder(n, 2));
}
