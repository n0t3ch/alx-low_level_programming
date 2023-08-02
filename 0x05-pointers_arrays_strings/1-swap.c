#include "main.h"

/**
 * swap_int - swap two int
 * @a: point first int
 * @b: point second int
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
