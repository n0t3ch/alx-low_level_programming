#include <stdio.h>
#include "main.h"

/**
 * print_array - prints an array
 * @a: pointer to array
 * @n: number of elements to print
 *
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
			printf("%i\n", a[i]);
		else
			printf("%i, ", a[i]);
	}
}
