#include "main.h"

/**
 * _memset - fill memory with constant byte
 * @s: beginning of memory
 * @b: constant byte
 * @n: number of bytes
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *rs;

	rs = s;
	while (n > 0)
	{
		*s = b;
		s++;
		n--;
	}
	return (rs);
}
