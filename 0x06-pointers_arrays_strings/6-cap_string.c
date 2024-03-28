#include "main.h"

/**
 * cap_string - capitalize every word
 * @s: target string
 * Return: capitalized string
 */
char *cap_string(char *s)
{
	char *up = s;
	int cspc = 13;
	int arri;
	int stri = 0;
	char spc[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};

	while (s[stri])
	{
		arri = 0;
		while (arri < cspc)
		{
		if ((stri == 0 || s[stri - 1] == spc[arri]) && (s[stri] > 96 && s[stri] < 123))
			s[stri] -= 32;
		arri++;
		}
		stri++;
	}
	return (up);
}
