#include "main.h"

/**
 * length - length of string
 * @s: pointer to string
 * Return: length
 */
int length(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (length(s) + 1);
}

/**
 * checker - check if string is palindrome
 * @s: pointer to string
 * @a: first char in string
 * @z: last char in string
 * Return: 1 if palindrome else 0
 */
int checker(char *s, int a, int z)
{
	if (s[a] == s[z])
	{
		if (a > (z / 2))
			return (1);
		else
			return (checker(s, a + 1, z - 1));
	}
	else
		return (0);
}

/**
 * is_palindrome - run checker
 * @s: pointer to string
 * Return: 1 if palindrome else 0
 */
int is_palindrome(char *s)
{
	return (checker(s, 0, length(s) - 1));
}
