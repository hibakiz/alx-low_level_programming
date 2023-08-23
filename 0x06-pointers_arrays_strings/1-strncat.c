#include "main.h"
/**
 * _strncat - Entry point
 *
 * Description: 'tsks'
 * @src: char
 * @dest: char
 * @n: int
 * Return: Always 0 (Success)
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	for (j = 0; dest[j] != '\0'; j++)
		;
	for (i = 0; i < n; i++)
	{
		if (src[i] == '\0')
			break;
		dest[j + i] = src[i];
	}

	return (dest);
}
