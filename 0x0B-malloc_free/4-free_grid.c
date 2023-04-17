#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - a function that frees a 2 dimensional grid previously created
 * @grid: 2 dimenstional grid of interest
 * @height: height of grid
 * Description: frees memory of grid
 * Return: 0 for now
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)

	{
		free(grid[i]);
	}
	free(grid);
}
