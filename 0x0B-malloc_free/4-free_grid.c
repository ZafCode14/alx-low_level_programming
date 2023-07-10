#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2d array of integers
 * @grid: the 2d array of integers to be freed
 * @height: the height of the 2d array of integers
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
