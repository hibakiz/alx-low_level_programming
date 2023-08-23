#include "main.h"
/**
 * _strcmp - Entry point
 *
 * Description: 'tsks'
 * @s1: char
 * @s2: char
 *
 * Return: Always 0 (Success)
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, j;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] == s2[i])
			j = 0;
		else
			return (s1[i] - s2[i]);
	i++;
	}
	return (j);
}
