#include "main.h"
#include<stdlib.h>
/**
 * array_range - check the code
 * @min: char
 * @max: char
 *
 * Return: Always 0.
 */
int *array_range(int min, int max)
{
	int *ptr, size = (max + 1) - min;
	int i, num = min;

	if (min > max)
		return (NULL);
	ptr = malloc(size * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; num < max; i++)
	{
		*(ptr + i) = num;
		num++;
	}
	return (ptr);
}
