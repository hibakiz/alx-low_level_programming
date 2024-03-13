#include "search_algos.h"

/**
 * binary_search - function that searches for a value in an array of integers
 * using the Linear search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value:  the value to search for
 * Return: the first index where value is located or NULL
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i;
	size_t low = 0, high = size - 1, mid = size;


	while(low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i < high; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[high]);
		mid = (low + high) / 2;
		if (array[mid] == value)
			return (mid);
		if (array[mid] > value)
			high = mid - 1;
		else if (array[mid] < value)
			low = mid + 1;

	}
	return (-1);
}
