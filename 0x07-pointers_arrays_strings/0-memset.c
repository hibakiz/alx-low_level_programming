#include "main.h"
/**
 * _memset - Entry point
 *
 * Description: 'tsks'
 * @s: char
 * @b: char
 * @n: int
 * Return: Always 0 (Success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
