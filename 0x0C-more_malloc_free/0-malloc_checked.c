#include "main.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * malloc_checked - check the code
 *
 * @b: int
 * Return: Always 0.
 */
void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = (char *) malloc(b * sizeof(char));
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
