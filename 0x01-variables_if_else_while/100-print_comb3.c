#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 on success
 */
int main(void)
{
	int low;
	int high;

	for (high = 0; high < 9; high++)
	{
		for (low = high + 1; low <= 9; low++)
		{
			putchar(high + '0');
			putchar(low + '0');

			if (low == 9 && high == 8)
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
