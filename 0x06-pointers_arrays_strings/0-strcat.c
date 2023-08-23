#include "main.h"
/**
 * _strcat - Entry point
 *
 * Description: 'tsks'
 * @src: char
 * @dest: char
 * Return: Always 0 (Success)
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (1)
	{
		for (j = 0; dest[j] != '\0'; j++)
			;
		if (src[i] == '\0')
			break;
		dest[j] = src[i];
		i++;

	}
	return (dest);
}
