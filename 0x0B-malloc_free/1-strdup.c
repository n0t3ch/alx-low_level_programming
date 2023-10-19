#include <stdlib.h>
#include <string.h>
#include "main.h"

char *_strdup(char *str)
{
	int len;
	char *cp;

	if (str == NULL)
		return (NULL);
	len = strlen(str);
	cp = malloc(sizeof(char) * (len + 1));
	if (cp == NULL)
		return (NULL);
	strcpy(cp, str);
	return (cp);
}
