#include "main.h"
#include<stdlib.h>

/**
* str_concat - check the code
* @s1: int
* @s2: int
* Return: Always 0.
*/

char *str_concat(char *s1, char *s2)
{
	char *p;
	int i, size1, size2, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (size1 = 0; s1[size1] != '\0'; size1++)
		;

	for (size2 = 0; s2[size2] != '\0'; size2++)
		;
	p = malloc((size1 * sizeof(*s1)) + (size2 * sizeof(*s2)) + 1);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < size1 + size2 + 1; i++)
	{
		if (i < size1)
			p[i] = s1[i];
		else
		{
			p[i] = s2[j];
			j++;
		}
	}

	p[i] = '\0';

	return (p);
}
