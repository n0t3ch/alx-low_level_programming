#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * str_concat - concatenate two stings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to new string
 */
char *str_concat(char *s1, char *s2)
{
	int len1, len2, i;
	char *new;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		*s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	new = malloc(len1 + len2 + 1);
	if (new == NULL)
		return (NULL);

	while (*s1 != '\0')
	{
		*new = *s1;
		new++;
		s1++;
	}
	while (*s2 != '\0')
	{
		*new = *s2;
		new++;
		s2++;
	}
	i = len1 + len2;
	new[i] = '\0';
	return (new);
}
