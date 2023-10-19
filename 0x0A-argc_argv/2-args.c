#include <stdio.h>

/**
 * main - prints every argument
 * @argc: argument count
 * @argv: argument array
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int n;

	for (n = 0; n < argc; n++)
	{
		printf("%s\n", argv[n]);
	}
	return (0);
}
