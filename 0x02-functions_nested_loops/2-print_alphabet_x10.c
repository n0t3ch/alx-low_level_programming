#include "main.h"

/**
 * print_alphabet_x10 - Make alphabet x10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char al;
	int num = 0;

	while (num < 10)
	{
		for (al = 'a'; al <= 'z'; al++)
			_putchar(al);
		_putchar('\n');
		num++;
	}
}


