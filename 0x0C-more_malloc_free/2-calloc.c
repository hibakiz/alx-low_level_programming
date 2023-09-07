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
	void *ptr;
	unsigned int i;

	if (size == 0 || nmemb == 0)
		return (NULL);
	ptr = malloc(nmemb * sizeof(size));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		*((char *) ptr + i) = 0;
	return (ptr);
}
