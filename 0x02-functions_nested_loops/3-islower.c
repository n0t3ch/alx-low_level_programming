#include "main.h"

/**
  * _islower - Checks for lowercase character
  * @c: The character to be checked
  *
  * Return: 1 for lowercase character or 0 for anything else
  */
int _islower(int c)
{
	int ret;

	if (c >= 97 && c <= 122)
		ret = 1;
	else
		ret = 0;
	return (ret);
}

