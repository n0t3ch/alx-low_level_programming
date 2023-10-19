#include <stdlib.h>
#include "main.h"

char *create_array(unsigned int size, char c)
{
	char *ar;
	int n;

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
