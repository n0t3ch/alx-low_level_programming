#include "main.h"

/**
 * finder - find square root
 * @num: number to find root of
 * @rt: where to start looking
 * Return: square root
 */
int finder(int num, int rt)
{
	if ((rt * rt) > num)
		return (-1);
	if ((rt * rt) == num)
		return (rt);
	return (finder(num, rt + 1));
}

/**
 * _sqrt_recursion - square root
 * @n: number given
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (finder(n, 1));
}
