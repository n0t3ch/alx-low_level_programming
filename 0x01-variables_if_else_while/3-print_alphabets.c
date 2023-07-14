#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 on success
 */
int main(void)
{
	char small;
	char big;

	for (small = 'a'; small <= 'z'; small++)
		putchar(small);
	for (big = 'A'; big <= 'Z'; big++)
		putchar(big);
	putchar('\n');
	return (0);
}
