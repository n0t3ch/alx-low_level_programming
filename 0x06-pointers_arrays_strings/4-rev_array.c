#include "main.h"

/**
 * reverse_array - reverse array
 * @a: array
 * @n: array objects
 * Return: reversed array
 */
void reverse_array(int *a, int n)
{
	int tmp;
	int start;
	int end;
	int mid;

	start = 0;
	end = (n - 1);
	mid = (n / 2);

	while (start <= mid)
	{
		tmp = a[start];
		a[start] = a[end];
		a[end] = tmp;
		start++;
		end--;
	}
}
