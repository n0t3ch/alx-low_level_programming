#include "main.h"

/**
 * _memcpy - copy memory
 * @dest: destination
 * @src: source
 * @n: number of bytes
 * Return: copied memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *full = dest;
	unsigned int count;

	for (count = 0; count < n; count++)
	{
		*dest = src[count];
		dest++;
	}
	return (full);
}
