#include "main.h"

/**
 * factorial - give factorial of number
 * @n: number given
 * Return: the factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (1);
	return (factorial(n) * factorial(n - 1));
}
