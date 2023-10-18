#include "main.h"

/**
 * _strcat - concatenate
 * @dest: destination
 * @src: source
 * Return: one long string
 */
char *_strcat(char *dest, char *src)
{
	char *rdest;

	while  (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	rdest = dest;
	return (rdest);
}
