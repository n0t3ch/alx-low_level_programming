#include "main.h"

/**
 * _strcat - concatenate
 * @dest: destination
 * @src: source
 *
 * Return: long string
 */
char *_strcat(char *dest, char *src)
{
	char *join;

	*join = *dest;
	while (*dest)
	{
		dest++;
	}

	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (join);
}
