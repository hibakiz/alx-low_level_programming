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

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			if (i != 0)
			s += i;
			return (s);
		}
	}
	return ('\0');
}
