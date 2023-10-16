#include "main.h"

/**
 * finder - help find square root
 * @b: test root
 * @pow: number given
 * Return: square root
 */
int finder(int b, int pow)
{
	if ((b * b) > pow)
		return (-1);
	if ((b * b) == pow)
		return (b);
	else
		return (finder(b + 1, pow));
	return (1);
}
/**
 * _sqrt_recursion - find square root
 * @n: given number
 * Return: the square root
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (finder(1, n));
}
