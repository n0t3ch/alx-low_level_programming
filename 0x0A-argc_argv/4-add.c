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
	int n, m, sum;
	char *al;

	sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (n = 1; n < argc; n++)
	{
		m = strtol(argv[n], &al, 10);
		if (*al)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += m;
		}
	}
	printf("%d\n", sum);
	return (0);
}
