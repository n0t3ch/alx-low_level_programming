#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 on Success
 */
int main(void)
{
	int one;
	int two;
	int tatu;

	for (one = 0; one < 8; one++)
	{
		for (two = one + 1; two < 9; two++)
		{
			for (tatu = two + 1; tatu < 10; tatu++)
			{
				putchar(one + '0');
				putchar(two + '0');
				putchar(tatu + '0');

				if (one == 7 && two == 8 && tatu == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
