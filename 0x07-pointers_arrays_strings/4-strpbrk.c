#include "main.h"
/**
 * _strpbrk - Entry point
 *
 * Description: 'tsks'
 * @accept: char
 * @s: char
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	int j = 0, i = 0;
	char *p;

	while (*(s + i) != '\0')
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				p = &s[i];
				return (p);
			}
		}
		i++;
	}
	return ('\0');
}
