#include "main.h"

/**
 * _puts_recursion - put function
 * @s: pointer to string
 * Return: null
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		return;
	_putchar(*s);
	s++;
	_puts_recursion(s);
	_putchar('\n');
}
