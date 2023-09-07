#include "main.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * string_nconcat - check the code
 * @s1: char
 * @s2: char
 * @n: int
 * Return: Always 0.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int i, size1, size2;
	int  num = n, len, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (size1 = 0; s1[size1] != '\0'; size1++)
		;

	for (size2 = 0; s2[size2] != '\0'; size2++)
		;
	if (num < 0)
		return (NULL);
	if (num >= size2)
		num = size2;

	len = size1 + num + 1;

	ptr = malloc(sizeof(*ptr) * len);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];
	for (j = 0; j < num; j++)
		ptr[i + j] = s2[j];
	ptr[i + j] = '\0';

	return (ptr);
}
