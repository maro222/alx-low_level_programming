#include <stdio.h>

/**
 * main - multiply 2 arguments
 * @argc: input
 * @argv: input
 * Return: 0 success , 1 fail
 *
 */

int main(int argc, char *argv[])
{
	int mul;

	if (argc == 3)
	{
		mul = (int)(argv[1] - 48) * (int)(argv[2] - 48);
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
