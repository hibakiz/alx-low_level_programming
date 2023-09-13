#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * int_index - fun name
 * @array: var
 * @cmp: var
 * @size: var
 * Return: sucess.
 */

int int_index(int *array, int size, int (*cmp)(int))
{

	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		return (i);
	}
	return (-1);
}
