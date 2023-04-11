#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *alloc_grid - initializes the grid with 0
 *@width: number of the columns of the matrix
 *@height: number of the raws of the matrix
 *Return: a pointer to a 2 dimensional array of integers
 */
int **alloc_grid(int width, int height)
{
	int **m;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	m = malloc(sizeof(int) * width * height);
	if (m == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			m[i][j] = 0;
	return (m);
}
