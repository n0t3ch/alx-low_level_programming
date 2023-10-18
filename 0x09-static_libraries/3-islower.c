#include "main.h"

/**
 * _islower - check if lower
 * @c: char to check
 *
 * Return: 1 if lower 0 if upper
 */
int _islower(int c)
{
	int ret;

	if (c > 96 && c < 123)
		ret = 1;
	else
		ret = 0;
	return (ret);
}
