#include "main.h"

/**
 * _isalpha - checks alphabet
 *
 * @c: char to check
 * Return: 1 if c is a letter
 */
int _isalpha(int c)
{
	int ret;

	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		ret = 1;
	else
		ret = 0;
	return (ret);
}
