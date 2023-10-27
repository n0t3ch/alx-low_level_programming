#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * str_concat - concatenate strings
 * @s1: first string
 * @s2: second string
 * Return: s1 + s2
 */

char *str_concat(char *s1, char *s2)
{
	char *p;
	int len;

	len = strlen(s1) + strlen(s2);
	p =(char *)malloc(sizeof(char) * (len + 1));
	if (p == NULL)
		return (NULL);
	strcpy(p, s1);
	strcat(p, s2);
	return (p);
}
