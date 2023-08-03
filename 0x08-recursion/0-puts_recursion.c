#include "main.h"

/**
 * _puts_recursion - recursive version of puts
 * @s: pointer to the string
 *
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\0');
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
