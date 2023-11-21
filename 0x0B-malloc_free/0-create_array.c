#include <stdlib.h>
#include "main.h"

/**
 * create_array - create array of char
 * @size: size of array
 * @c: character in array
 * Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int index;
	char *arr;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);
	if (arr == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		arr[index] = c;
	return (arr);
}

