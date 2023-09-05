#include "main.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * create_array - check the code
 * @size: int
 * @c: int
 * Return: Always 0.
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	ptr = (char *) malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
		ptr[i] = c;
	ptr[i] = '\n';
	return (ptr);
}
