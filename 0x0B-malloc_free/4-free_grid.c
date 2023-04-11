#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *free_grid - frees a 2D array
 *@grid: double pointer
 *@height: raws of 2D array
 *Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
