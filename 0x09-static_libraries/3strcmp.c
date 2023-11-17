#include "main.h"

/**
 * _strcmp - compare strings
 * @s1: first string
 * @s2: second string
 * Return: any difference in s1 and s2
 */
int _strcmp(char *s1, char *s2)
{
	int ret;
	int a;

	a = 0;
	ret = 0;

	while (s1[a] != '\0' && s2[a] != '\0' && s1[a] == s2[a])
		a++;
	if (s1[a] != s2[a])
		ret = (s1[a] - s2[a]);
	return (ret);
}
