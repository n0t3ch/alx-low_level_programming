#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 on success
 */
int main(void)
{
	int moja, mbili;

	for (moja = 0; moja <= 98; moja++)
	{
		for (mbili = 1; mbili <= 99; mbili++)
		{
			putchar((moja / 10) + '0');
			putchar((moja % 10) + '0');
			putchar(' ');
			putchar((mbili / 10) + '0');
			putchar((mbili % 10) + '0');

			if (moja == 98 && mbili == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
