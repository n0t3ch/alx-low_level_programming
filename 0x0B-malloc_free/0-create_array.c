#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates array of c
 * @size: size of array
 * @c: character in array
 * Return: char in array
 */

char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int n;

	if (size == 0)
		return (NULL);
	ar = malloc(size);
	if (ar == NULL)
		return (NULL);
	for (n = 0; n < size; n++)
	{
		ar[n] = c;
	}
	return (ar);
}
