#include "main.h"

/**
 * _strlen - length of str
 * @s: pointer to str
 *
 * Return: length of str
 */
int _strlen(char *s)
{
	int len;

	for (len = 0; *s != '\0'; len++)
		s++;
	return (len);
}
