#include "main.h"

/**
 * _pow_recursion - find the power of x to y
 * @x: the base number
 * @y: the power
 * Return: x to the power y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (_power_recursion(x, y - 1) * x);
}
