#include <stdio.h>

/**
 * main - prints number of arguments
 * @argc: argument count
 * @argv: argument array
 * Return: 0 on success
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
