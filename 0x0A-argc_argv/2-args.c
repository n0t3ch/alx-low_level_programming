#include <stdlib.h>
#include <stdio.h>

/**
 * main - print arguments given
 * @argc: argument count
 * @argv: argument array
 * Return: Null
 */
int main(int argc, char *argv[])
{
	int index;

	for (index = 0; index < argc; index++)
		printf("%s\n", argv[index]);
	return (0);
}
