#include "main.h"

/**
* free_grid - a function that free grid memory
* @grid: the grid to free
* @height: number of elements will be freed
* Return: void
*/

void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
		free(grid[i]);

	free(grid);
}
