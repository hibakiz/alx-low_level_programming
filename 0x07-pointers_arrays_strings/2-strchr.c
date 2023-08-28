#include "main.h"
/**
 * _strchr - Entry point
 *
 * Description: 'tsks'
 * @c: char
 * @s: char
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 1; s[i] != '\0'; i++)
	{
		if (s[0] == c)
			return (s);
		 else if (s[i] == c)
			return (s + i);	
	}
	return (s + i);
}
