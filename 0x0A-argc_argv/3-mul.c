#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: count
 * @argv: vector
 * Return: zero on success
 */
int main(int argc, char *argv[])
{
	int n;
	int k;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	n = atoi(argv[1]);
	k = atoi(argv[2]);
	printf("%i\n", (n * k));
	return (0);
}
