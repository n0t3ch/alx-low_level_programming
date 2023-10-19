#include <stdlib.h>
#include <stdio.h>
#include "main.h"

char *_strdup(char *str)
{
	int len;
	char *cp;

	len = 0;
	while (*str)
	{
		str++;
		len++;
	}
	cp = malloc(sizeof(char) * (len + 1));
	if (cp == NULL)
		return (NULL);
	strcpy(cp, str);
	return (cp);
}
