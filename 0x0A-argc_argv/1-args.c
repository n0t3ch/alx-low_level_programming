#include <stdlib.h>
#include <stdio.h>

/**
 * main - print number of arguments passed
 * @argc: argument count
 * @argv: argument array
 * Return: Null
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
