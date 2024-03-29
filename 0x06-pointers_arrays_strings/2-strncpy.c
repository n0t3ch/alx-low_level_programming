#include "main.h"

/**
 * _strncpy - copy to n characters
 * @dest: destination
 * @src: source
 * @n: characters to copy
 * Return: copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *end = dest;

	while (*src && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}
	return (end);
}
