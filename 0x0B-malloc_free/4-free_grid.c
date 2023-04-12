#include "main.h"

/**
 * free_grid- allocate an array of specific siz
 * @height: string
 * @grid: inpit
 * Return: pointer success , Null fails
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
