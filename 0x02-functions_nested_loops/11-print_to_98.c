#include "main.h"

/**
  * print_to_98 - Prints all natural numbers from n to 98
  * @n: The number to start printing from
  *
  * Return: Always 0.
  */
void print_to_98(int n)
{
	int j, k, l;

	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			if (n == 98)
			{
				j = n / 10;
				k = n % 10;
				_putchar(j + '0');
				_putchar(k + '0');
				_putchar('\n');
				break;
			}
			else if (n > 9 && n < 98)
			{
				j = n / 10;
				k = n % 10;
				_putchar(j + '0');
				_putchar(k + '0');
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(n + '0');
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
	{
		for (; n >= 98; n--)
		{
			if (n == 98)
			{
				j = n / 10;
				k = n % 10;
				_putchar(j + '0');
				_putchar(k + '0');
				_putchar('\n');
				break;
			}
			else
			{
				l = n / 100;
				j = ((n -(l * 100)) / 10);
				k = n % 100;
				_putchar((l / 10) + '0');
				_putchar(j + '0');
				_putchar(k + '0');
			}
		}
	}
}

