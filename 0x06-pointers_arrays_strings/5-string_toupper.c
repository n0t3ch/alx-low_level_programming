#include "main.h"

/**
 * string_toupper - lower case to upper case
 * @low: string to check
 * Return: uppercase string
 */
char *string_toupper(char *low)
{
	char *up = low;
	int dif;

	while (*low)
	{
		if (*low >= 97 && *low <= 122)
		{
			dif = *low - 96;
			*low = dif + 64;
		}
		low++;
	}
	return (up);
}
