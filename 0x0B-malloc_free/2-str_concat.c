#include <stdlib.h>
#include <string.h>
#include "main.h"

char *str_concat(char *s1, char *s2)
{
	char *p;
	int len;

	len = strlen(s1) + strlen(s2);
	p =(char *)malloc(sizeof(char) * (len + 1));
	if (p == NULL)
		return (NULL);
	p = strcat(s1, s2);
	return (p);
}
