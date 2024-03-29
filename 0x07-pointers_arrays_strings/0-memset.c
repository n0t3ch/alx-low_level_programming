#include "main.h"

/**
 * _memset - set memory to char
 * @s: memory to cover
 * @b: char to place in mem
 * @n: number of bytes to cover
 * Return: copied memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count;

	for (count = 0; count < n; count++)
		s[count] = b;
	return (s);
}
