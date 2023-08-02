#include "main.h"
int _strlen(char *s);

/**
 * print_rev - reverse a given string
 * @s: pointer to string
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	int a;
	int len;

	len = _strlen(s);
	for (a = (len - 1); a >= 0; a--)
		_putchar(s[a]);
	_putchar('\n');
}

/**
 * _strlen - length of string
 * @s: pointer to string
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int len;

	for (len = 0; *s != '\0'; len++)
	{
		s++;
	}
	return (len);
}
