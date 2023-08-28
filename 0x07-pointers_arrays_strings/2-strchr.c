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
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		else if (*(s + 1) == c)
			return (s + 1);
		s++;
	}

	return (s + 1);
}
