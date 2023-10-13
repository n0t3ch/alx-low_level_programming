#include "main.h"

/**
 * _puts_recursion - puts using recursion
 * @s: pointer to string
 * Return: null
 */
void _puts_recursion(char *s)
{
	_putchar(*s);
	s++;
	if (*s != '\0')
		_puts_recursion(s);
	else
		_putchar('\n');
}
