#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2-dimensional array of integers
 * @width: width of interest
 * @height: height of interest
 * Return: pointer to a two dimensional array
 */
int **alloc_grid(int width, int height)
{
	int **two;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	two = malloc(sizeof(int *) * height);

	if (two == NULL)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		two[x] = malloc(sizeof(int) * width);
		if (two[x] == NULL)
		{
			for (; x >= 0; x--)
				free(two[x]);
			free(two);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			two[x][y] = 0;
	}
	return (two);
}
