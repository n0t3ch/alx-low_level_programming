#include "main.h"

/**
 * leet - 7331
 * @s: string literal
 * Return: 7331 encoded
 */
char *leet(char *s)
{
	int tot = 5;
	int ind;
	int stri = 0;
	char low[] = {'a', 'e', 'o', 't', 'l'};
	char up[] = {'A', 'E', 'O', 'T', 'L'};
	char num[] = {'4', '3', '0', '7', '1'};

	while (s[stri])
	{
		ind = 0;
		while (ind < tot)
		{
			if (low[ind] == s[stri] || up[ind] == s[stri])
				s[stri] = num[ind];
			ind++;
		}
		stri++;
	}
	return (s);
}
