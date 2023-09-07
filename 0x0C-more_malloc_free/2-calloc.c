#include "main.h"
#include<stdlib.h>
/**
 * _calloc - check the code
 * @nmemb: char
 * @size: char
 *
 * Return: Always 0.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (size == 0 || nmemb == 0)
		return (NULL);
	ptr = malloc(nmemb * sizeof(size));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ptr[i] = 0;
	ptr[i] = '\n';
	return (ptr);
}
