#include "main.h"
/**
 * _strncpy - Entry point
 *
 * Description: 'tsks'
 * @src: char
 * @dest: char
 * @n: int
 * Return: Always 0 (Success)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j = 0;

	while (src[j] != '\0')
	{
		j++;
	}
	for (i = 0; i < n; i++)
	{
		if (i > j)
			dest[i] = 0;
		else
			dest[i] = src[i];
	}
	return (dest);
}
