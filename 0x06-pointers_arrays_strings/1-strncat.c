#include "main.h"

/**
 * _strncat - concatenate to n bytes
 * @dest: destination
 * @src: source
 * @n: number of bytes
 *
 * Return: long string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *join = dest;
	int len = 0;

	while (*dest)
	{
		dest++;
	}

	while (len < n && *src)
	{
		*dest = *src;
		dest++;
		src++;
		len++;
	}

	return (join);
}
