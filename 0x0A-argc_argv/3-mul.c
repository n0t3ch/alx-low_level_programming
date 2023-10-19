#include <stdio.h>

/**
 * main - multiply 2 numbers
 * @argc: argument count
 * @argv: argument array
 * Return: 1 on fail, 0 on success
 */
int main(int argc, char *argv[])
{
	int mul1, mul2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	mul1 =  atoi(argv[1]);
	mul2 = atoi(argv[2]);
	printf("%i\n", (mul1 * mul2));
	return (0);
}
