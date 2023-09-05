#include "main.h"
#include<stdlib.h>

/**
* free_grid - check the code
* @grid: int
* @height: int
* Return: Always 0.
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
