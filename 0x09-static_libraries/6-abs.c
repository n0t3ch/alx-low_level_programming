#include "main.h"

/**
 * _abs - only absolutes
 *
 * @ab: int given
 * Return: the absolute
 */
int _abs(int ab)
{
	int ret;

	if (ab >= 0)
		ret = ab;
	else
		ret = ab * -1;
	return (ret);
}
