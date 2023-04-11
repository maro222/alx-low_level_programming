#include <stdio.h>
#include <stdlib.h>

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
	char *c;

	while(--argc)
	{
		for (c =argv[argc]; *c; c++)
			if (*c < '0' || *c > '9')
				return (printf("Error\n"), 1);
		add += atoi(argv[argc]);
	}
	printf("%d/n", add);
	return (0);
}
