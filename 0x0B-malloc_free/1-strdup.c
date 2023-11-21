#include <stdlib.h>
#include "main.h"

/**
 * _strdup - copy string to memory
 * @str: pointer to string
 * Return: pointer to copied string
 */
char *_strdup(char *str)
{
	int len, ind;
	char *new;

	if (str == NULL)
		return (NULL);

	len = strlen(str);

	new = malloc(len + 1);
	if (new == NULL)
		return (NULL);

	for (ind = 0; ind < len; ind++)
	{
		new[ind] = *str;
		str++;
	}
	return (new);
}
