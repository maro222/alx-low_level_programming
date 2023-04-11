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
	if (argc == 2)
	{
		int i, coins = 0, money = atoi(argv[1]);
		int arr[] = {25, 10, 5, 2, 1};

		for (i = 0, i < 5; i++)
		{
			if (money >= arr[i])
			{
				coins += money / arr[i];
				money = money % arr[i];
				if (money % arr[i] == 0)
					break;
			}
		}
	printf("%d\n", coins);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
