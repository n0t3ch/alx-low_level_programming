#include "main.h"

/**
 * _abs -used to compute absolute value of Integer.
 * @x: is the number to compute.
 *
 * Return: Absolute value of number x
 */
int _abs(int x)
{
	int pos;

	if (x < 0)
	{
		pos = x * -1;
	}
	else
	{
		pos = x;
	}
	return (pos);
}
