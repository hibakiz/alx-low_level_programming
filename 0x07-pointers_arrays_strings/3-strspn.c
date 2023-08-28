#include "main.h"
#include<string.h>
/**
 * _strspn - Entry point
 *
 * Description: 'tsks'
 * @accept: char
 * @s: char
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	int j = 0, c = 0, i = 0;


	while (*(s + i) != '\0' && *(accept + j) != '\0')
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				c++;
				break;
			}
		}
		i++;
	}
	return (c);
}
