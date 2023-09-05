#include "main.h"
#include<stdlib.h>

/**
* alloc_size - check the code
* @width: int
* @height: int
* Return: Always 0.
*/


int **alloc_size(int width, int height)
{
	int **size;
	int i, j;

	if (width + height < 2 || width < 1 || height < 1)
		return (NULL);

	size = malloc(height * sizeof(*size));
	if (size == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		size[i] = malloc(width * sizeof(**size));
		if (size[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(size[i]);
			free(size);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			size[i][j] = 0;
	}

	return (size);
}
