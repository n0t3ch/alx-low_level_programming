#include "main.h"
int _strlen(char *s);

/**
 * rev_string - reverse a string
 * @s: pointer to string
 *
 * Return: nothing
 */
void rev_string(char *s)
{
	int a;
	int n;
	char t;

	n = _strlen(s);
	a = 0;
	while (a < (n / 2))
	{
		t = s[a];
		s[a] = s[n - a - 1];
		s[n - a - 1] = t;
		a++;
	}
}

/**
 * _strlen - length of string
 * @s: pointer to string
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int len;

	for (len = 0; *s != '\0'; len++)
	{
		s++;
	}
	return (len);
}
