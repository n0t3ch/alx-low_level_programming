#include <stdlib.h>
#include "main.h"

/**
 * _strstr - locate substring
 * @haystack: where to look
 * @needle: what to look for
 * Return: what was found
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *one = haystack;
		char *two = needle;

		while (*one == *two && *two != '\0')
		{
			one++;
			two++;
		}

		if (*two == '\0')
			return (haystack);
	}

	return (NULL);
}
