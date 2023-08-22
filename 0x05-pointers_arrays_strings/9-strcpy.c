#include "main.h"
#include<stdio.h>
/**
 * _strcpy - Entry point
 *@dest: int
 *@src: int
 * Description: 'tsks'
 *
 *
 * Return: Always 0 (Success)
 */
char *_strcpy(char *dest, char *src)
{
	int j, i = 0;

	while (*(src + i) != '\0')
	{
		i++;
	}
	for (j = 0; j < i; j++)
		dest[j] = src[j];
	dest[j] = '\0';

	return (dest);
}
