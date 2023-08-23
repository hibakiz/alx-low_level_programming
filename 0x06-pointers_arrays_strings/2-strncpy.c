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
	int i;

	for (i = 0; i < n; i++)
		dest [i] = src[i];
	return (dest);
}
