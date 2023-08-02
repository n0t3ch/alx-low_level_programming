#include "main.h"
int _strlen(char *s);

/**
 * puts_half - prints half a string
 * @str: pointer to string
 *
 * Return: nothing
 */
void puts_half(char *str)
{
	int len;
	int n;

	len = _strlen(str);
	if ((len % 2) != 0)
		n = (len - 1) / 2;
	else
		n = len / 2;

	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\0');
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
