#include "main.h"

/**
 * alloc_grid - allocate an array of specific size
 * @width: string
 * @height: string
 * Return: pointer success , Null fails
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int *arr =  malloc(height * sizeof(*int));

	if (width <= 0 || height <= 0 || arr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(width * sizeof(int));
		if (arr[i] == NULL)
		{
			while (i--)
				free(arr[i]);
			free(arr);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	}
	return (arr);
}

