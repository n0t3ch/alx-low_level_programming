#include "main.h"

int _strcmp(char *s1, char *s2)
{
	int a;
	a = 0;

	if (*s1 != '\0' && *s2 != '\0' && s1[a] == s2[a])
		a++;
	if (s1[a] != s2[a])
		return (s1[a] - s2[a]);
	return (0);
}
