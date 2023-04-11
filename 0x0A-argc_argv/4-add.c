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
	int i, add = 0;

	for (i = 1; i < argc; i++)
	{
		if (argv[i] >= 48 || argv[i] <= 57)
		{
			add = add + (int)argv[i];
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d/n", sum);
	return (0);
}
