#include "main.h"

/**
 * _strncat - join upto n bytes
 * @dest: destination
 * @src: source
 * @n: number of bytes
 * Return: longer string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *rdest;

	rdest = dest;

	while (*dest != '\0')
		dest++;
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';

	return (rdest);
}
