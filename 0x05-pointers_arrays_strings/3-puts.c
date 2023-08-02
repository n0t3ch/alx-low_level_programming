#include "main.h"

/**
 * _puts - my version of puts
 * @str: string to put
 *
 * Return: nothing
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
