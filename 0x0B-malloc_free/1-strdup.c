#include <stdlib.h>
#include "main.h"

char *_strdup(char *str)
{
	int len, n;
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
	for (n = 0; n < len; n++)	
		cp[n] = str[n];
	return (cp);
}
