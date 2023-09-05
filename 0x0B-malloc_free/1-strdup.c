#include "main.h"
#include<stdlib.h>

/**
* _strdup - check the code
* @str: int
* Return: Always 0.
*/

char *_strdup(char *str)
{
	char *p;
	int i, s;

	if (str == NULL)
		return (NULL);

	for (s = 0; str[s] != '\0'; s++)
		;

	p = malloc(s * sizeof(*p) + 1);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < s; i++)
		p[i] = str[i];

	p[i] = '\n';

	return (p);
}
