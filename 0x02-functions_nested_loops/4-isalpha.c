#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: The character to be checked
 *
 * Return: 1 for alphabetic character or 0 for anything else
 */
int _isalpha(int c)
{
	int ret;

	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		ret = 1;
	else
		ret = 0;
	return (ret);
}
