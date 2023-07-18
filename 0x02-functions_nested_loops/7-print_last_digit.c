#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @l: The he number to be found
 *
 * Return: value of the last digit  of number l
 */
int print_last_digit(int l)
{
	int last;

	last = l % 10;

	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
