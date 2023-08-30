#include "main.h"

/**
 * is_palindrome - tsks
 * @s: char
 * Return: 0
 */

int is_palindrome(char *s)
{
	int leng(char *s);
	int my_pal(char *s, int l);
	int length;

	length = leng(s) - 1;

	return (my_pal(s, --length));
}

/**
 * leng - iii
 * @s: dfghj
 * Return: df
 */

int leng(char *s)
{
	if (*s == '\0')
		return (1);
	else
		return (1 + leng(++s));
}

/**
 * my_pal - prim
 * @s: char
 * @l: s
 * Return: Successful
 */

int my_pal(char *s, int l)
{
	if (*s == *(s + l))
	{
		if (l <= 0)
			return (1);
		else
			return (my_pal(++s, l - 2));
	}
	else
		return (0);
}
