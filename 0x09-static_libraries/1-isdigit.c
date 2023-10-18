#include "main.h"

/**
 * _isdigit - check if num is decimal digit
 * @c: num to be checked
 *
 * Return: 1 if c is num else 0
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
