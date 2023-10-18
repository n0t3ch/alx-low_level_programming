#include "main.h"

/**
 *   _strcpy - Copy a string.
 *   @dest: Destination value to be checked
 *   @src: Source value to bbe checked
 *   Return: the pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
int i;

for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
dest[i++] = '\0';
return (dest);
}
