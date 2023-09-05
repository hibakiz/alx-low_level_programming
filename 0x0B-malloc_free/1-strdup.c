#include "main.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * _strdup - check the code
 * @str: int
 * Return: Always 0.
 */
char *_strdup(char *str)
{
	char *ptr;
	int i, size;

	if (str == NULL)
		return (NULL);
	for (size = 0; str[size] != '\n'; size++)
		;
	ptr = malloc(size * sizeof(*ptr) + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ptr[i] = str[i];
	ptr[i] = '\n';
	return (ptr);
}
