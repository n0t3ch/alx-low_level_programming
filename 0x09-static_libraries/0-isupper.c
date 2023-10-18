#include "main.h"

/**
 * _isupper - check if letter is upper
 * @c: letter to be checked
 *
 * Return: 1 if upper
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else
		return (0);
}
