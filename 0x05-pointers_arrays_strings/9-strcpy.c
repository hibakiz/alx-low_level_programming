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
	int i = 0;

	while (*(src + i) != '\0')
	{
	*(dest + i) = *(src + i);
	i++;
	}
	return (dest);
}
