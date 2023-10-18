#include "main.h"

/**
 * _memcpy - copy memory area
 * @dest: destination
 * @src: source
 * @n: number of bytes
 * Return: destination after copying
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *rdest;

	rdest = dest;
	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	return (rdest);
}
